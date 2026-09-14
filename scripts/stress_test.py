#!/usr/bin/env python3
"""Stress test: run a generator, feed both solutions, stop at the first mismatch.

    scripts/stress_test.py sol.cpp brute.cpp gen.py [iterations]

gen.py receives the iteration number as argv[1] (use it as a random seed)
and prints one test case to stdout.
"""
import os
import subprocess
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
BUILD = os.path.join(ROOT, "build")


def compile_cpp(src):
    os.makedirs(BUILD, exist_ok=True)
    out = os.path.join(BUILD, "stress_" + os.path.splitext(os.path.basename(src))[0])
    subprocess.run(["g++", "-std=c++17", "-O2", "-I", os.path.join(ROOT, "include"), "-o", out, src], check=True)
    return out


def run(cmd, inp=None):
    return subprocess.run(cmd, input=inp, capture_output=True, text=True, timeout=10, check=True).stdout


def main():
    if len(sys.argv) < 4:
        sys.exit(__doc__)
    sol, brute = compile_cpp(sys.argv[1]), compile_cpp(sys.argv[2])
    gen = sys.argv[3]
    iters = int(sys.argv[4]) if len(sys.argv) > 4 else 1000

    for i in range(iters):
        test = run([sys.executable, gen, str(i)])
        a, b = run([sol], test), run([brute], test)
        if a.split() != b.split():
            print(f"MISMATCH on iteration {i}\n--- input ---\n{test}--- sol ---\n{a}--- brute ---\n{b}")
            sys.exit(1)
        if (i + 1) % 100 == 0:
            print(f"{i + 1} ok")
    print(f"all {iters} passed")


if __name__ == "__main__":
    main()
