class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        int first = 0;
        int last = numbers.size()-1;
        int total;

        while (first < last) {
            total = numbers[first] + numbers[last];
            if (total == target) return {first+1, last+1};
            else if (total > target) last--;
            else first++;
        }

    }
};
