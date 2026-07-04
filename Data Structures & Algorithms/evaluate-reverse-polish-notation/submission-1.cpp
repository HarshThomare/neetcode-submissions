#include <cctype> 

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> vals;
        int temp1, temp2;
        for (auto& c : tokens) {
            
            if (c == "+") {
                temp2 = vals.top();
                vals.pop(); 
                temp1 = vals.top();
                vals.pop();
                vals.push(temp1+temp2);
            }
            else if (c == "-") {
                temp2 = vals.top();
                vals.pop(); 
                temp1 = vals.top();
                vals.pop();
                vals.push(temp1-temp2);
            }
            else if (c == "*") {
                temp2 = vals.top();
                vals.pop(); 
                temp1 = vals.top();
                vals.pop();
                vals.push(temp1*temp2);
            }
            else if (c == "/") {
                temp2 = vals.top();
                vals.pop(); 
                temp1 = vals.top();
                vals.pop();
                vals.push(temp1/temp2);
            }
            else {
                vals.push(stoi(c));    
            }
        }
        return vals.top();    
    }
};
