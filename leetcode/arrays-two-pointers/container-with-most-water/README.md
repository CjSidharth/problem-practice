# 11. Container With Most Water

https://leetcode.com/problems/container-with-most-water/

**Pattern:** two pointers (shrink from both ends)

## Approach
Start with the widest container (`l = 0`, `r = n-1`). Area is capped by the shorter wall, so moving the taller wall inward can never help: width shrinks and height can't exceed the short wall. Always move the shorter wall.

## Complexity
- Time: O(n)
- Space: O(1)

## Edge cases
- `n == 2`: one container only
- Equal heights: moving either pointer is fine
- All zeros: answer 0
