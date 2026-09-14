# problem-practice

Competitive programming + LeetCode practice, all in C++.

## Stats

| Section | Count |
|---|---|
| AtCoder contests | 137 |
| AtCoder solutions | 241 |
| LeetCode problems | 1 |

Recount: `find contests/atcoder -name '*.cpp' | wc -l`

## Layout

| Folder | What's in it |
|---|---|
| [`templates/`](templates) | Trusted algorithm templates (mirrors Obsidian): graph, dp, data structures, io |
| [`contests/`](contests) | Raw contest-mode solutions: [`usaco/`](contests/usaco) (bronze/silver/gold), [`codeforces/`](contests/codeforces), [`atcoder/`](contests/atcoder) |
| [`leetcode/`](leetcode) | Polished, grouped by pattern. Each problem has `solution.cpp`, `README.md` (approach, complexity, edge cases), `notes.md` (first-try mistakes) |
| [`scripts/`](scripts) | Scaffolding, test runner, stress tester |
| [`include/`](include) | `bits/stdc++.h` shim so solutions build with macOS clang |

Naming: contests are `<judge>/<contest>/<problem>.cpp` (e.g. `atcoder/abc367/a.cpp`); LeetCode is `leetcode/<pattern>/<slug>/`.

## Workflow

```bash
# new problem (template + empty test case)
scripts/new_problem.sh contests/codeforces/1900-div2 B
scripts/new_problem.sh leetcode/dp/climbing-stairs

# fill in B.1.in / B.1.ans (add B.2.in, B.2.ans ...), then
scripts/run_tests.sh contests/codeforces/1900-div2/B.cpp

# brute force vs optimized; gen.py gets a seed as argv[1] and prints one test
scripts/stress_test.py sol.cpp brute.cpp gen.py 1000
```

Binaries go to `build/` (gitignored).
