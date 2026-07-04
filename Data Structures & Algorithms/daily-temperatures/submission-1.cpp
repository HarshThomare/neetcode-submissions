class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        std::vector<int> result(temperatures.size(), 0);
        std::stack<std::pair<int, int>> stk{};

        for (int i = 0; i < temperatures.size(); i++) {
            while (!stk.empty() && stk.top().first < temperatures[i]) {
                result[stk.top().second] = i - stk.top().second;
                stk.pop();
            }
            stk.push({temperatures[i], i});
        }
        return result;   
    }
};
