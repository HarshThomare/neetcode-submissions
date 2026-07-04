class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> res(temperatures.size(), 0);
        stack<pair<int, int>> stk; 

        for (int i = 0; i < temperatures.size(); i++) {
            auto temp = temperatures[i];
            while(!stk.empty() && temp > stk.top().first) { // Updates index for all idx that have not been popped
                auto top = stk.top();
                stk.pop();
                res[top.second] = i - top.second;
            }
            stk.push({temp, i});
        }
        return res;
    }
};
