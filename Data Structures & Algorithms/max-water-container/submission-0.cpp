class Solution {
public:
    int maxArea(vector<int>& heights) {
        // area = min(pair) * delta_i

        // Easy answer O(n^2) loop through and calculate all
        // O(n) using 2 ptr. 
        // move 1 and calculate. Store max pair        
        int i = 0;
        int j = heights.size() -1;
        int max_area = -1;
        while (i < j) {
            int area = min(heights[i], heights[j]) * (j-i);
            max_area = max(area, max_area);

            if (heights[i] > heights[j]) {
                j--;
            }
            else{
                i++;
            }
        }
        return max_area;

    }
};
