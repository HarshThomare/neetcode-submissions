class Solution {
public:

    string encode(vector<string>& strs) {
        //sz+#+word+sz+#+word
        string encoded_str;
        for (auto& i : strs) {
            encoded_str.push_back('0');
            encoded_str.push_back('1');
            for (auto& j : i) {
                encoded_str.push_back(j);
                encoded_str.push_back(j);
            }
        }
        encoded_str.push_back('0');
        encoded_str.push_back('1');
        return encoded_str;
    }

    vector<string> decode(string s) {
        
        vector<string> sol;

        string i;
        for (int p = 2; p < s.size(); p+=2) {
            string sub = s.substr(p, 2);
            if (sub == "01") {
                sol.push_back(i);
                i.clear();
            }
            else {
                i += sub[0];
            }
        }
        return sol;
    }
};
