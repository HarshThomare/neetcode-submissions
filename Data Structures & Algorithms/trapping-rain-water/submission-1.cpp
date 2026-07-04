class Solution {
public:
    int trap(vector<int>& height) {
        // i, i+1
        // height = min(height[i], height[j]) * (j-i)
        if (height.empty()) return 0;

        int l = 0, r = height.size() - 1;
        int leftMax = height[l], rightMax = height[r];
        int res = 0;
        while (l < r) {
            if (leftMax < rightMax) {
                l++;
                leftMax = max(leftMax, height[l]);
                res += leftMax - height[l];
            }
            else {
                r--;
                rightMax = max(rightMax, height[r]);
                res += rightMax - height[r];
            }
        }
        return res;
    }
};
