#!/usr/bin/env bash
# Compile a solution and diff it against every <name>.N.in / <name>.N.ans next to it.
#   scripts/run_tests.sh contests/codeforces/1900-div2/A.cpp
set -euo pipefail

[[ $# -eq 1 ]] || { echo "usage: $0 <file.cpp>" >&2; exit 1; }
src=$1
base=${src%.cpp}
root=$(cd "$(dirname "$0")/.." && pwd)
bin="$root/build/$(basename "$base")"
mkdir -p "$root/build"

g++ -std=c++17 -O2 -Wall -I "$root/include" -o "$bin" "$src"

shopt -s nullglob
tests=("$base".*.in)
if [[ ${#tests[@]} -eq 0 ]]; then
    echo "no tests found ($base.*.in), running on stdin"
    exec "$bin"
fi

pass=0 fail=0
for in in "${tests[@]}"; do
    ans=${in%.in}.ans
    got=$("$bin" < "$in")
    if [[ ! -s $ans ]]; then
        echo "? $(basename "$in") (no expected output)"; echo "$got"
    elif diff -wB <(echo "$got") "$ans" > /dev/null; then
        echo "✓ $(basename "$in")"; pass=$((pass + 1))
    else
        echo "✗ $(basename "$in")"; diff -wB <(echo "$got") "$ans" || true
        fail=$((fail + 1))
    fi
done
echo "$pass passed, $fail failed"
[[ $fail -eq 0 ]]
