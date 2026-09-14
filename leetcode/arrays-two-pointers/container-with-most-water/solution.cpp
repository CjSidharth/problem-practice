// LeetCode 11. Container With Most Water
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0, r = (int)height.size() - 1, best = 0;
        while (l < r) {
            best = max(best, min(height[l], height[r]) * (r - l));
            if (height[l] < height[r]) l++;
            else r--;
        }
        return best;
    }
};

int main() {
    vector<int> a{1, 8, 6, 2, 5, 4, 8, 3, 7}, b{1, 1}, c{4, 3, 2, 1, 4};
    assert(Solution().maxArea(a) == 49);
    assert(Solution().maxArea(b) == 1);
    assert(Solution().maxArea(c) == 16);
    cout << "ok\n";
}
