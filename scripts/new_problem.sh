#!/usr/bin/env bash
# Scaffold a problem from the fast_io template, plus an empty test case.
#   scripts/new_problem.sh contests/codeforces/1900-div2 B   -> B.cpp, B.1.in, B.1.ans
#   scripts/new_problem.sh leetcode/dp/climbing-stairs        -> solution.cpp + README.md + notes.md
set -euo pipefail
cd "$(dirname "$0")/.."

[[ $# -ge 1 ]] || { echo "usage: $0 <dir> [name]" >&2; exit 1; }
dir=$1
name=${2:-solution}
mkdir -p "$dir"

[[ -e "$dir/$name.cpp" ]] && { echo "$dir/$name.cpp already exists" >&2; exit 1; }
cp templates/io/fast_io.cpp "$dir/$name.cpp"
touch "$dir/$name.1.in" "$dir/$name.1.ans"

if [[ $dir == leetcode/* ]]; then
    title=$(basename "$dir")
    [[ -e "$dir/README.md" ]] || printf '# %s\n\n**Pattern:** \n\n## Approach\n\n## Complexity\n- Time: \n- Space: \n\n## Edge cases\n- \n' "$title" > "$dir/README.md"
    [[ -e "$dir/notes.md" ]] || printf '# Notes: what I got wrong first try\n\n- \n' > "$dir/notes.md"
fi

echo "created $dir/$name.cpp"
