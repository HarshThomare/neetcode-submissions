class Solution {
public:

    string encode(vector<string>& strs) {
        //sz+#+word+sz+#+word
        string encoded_str;
        for (auto& i : strs) {
            encoded_str += to_string(i.size()) + "#" + i;
        }
        return encoded_str;
    }

    vector<string> decode(string s) {
        // while (i in range(len(s))):
        // if s[i] == "#"
        // legnth_substr = last_word_end:i
        // add word to vector
        // update last_word_end
        vector<string> sol;

        auto last_word_idx = 0;
        auto decode_ptr = 0;
        while (decode_ptr < s.size()) {
            if (s[decode_ptr] != '#') {
                decode_ptr++;
                continue;
            }

            auto length_substr = stoi(s.substr(last_word_idx, (decode_ptr-last_word_idx)));
            auto end_index = decode_ptr+1+length_substr;
            sol.push_back(s.substr(decode_ptr+1, length_substr));
            decode_ptr = end_index;
            last_word_idx = end_index;
        }
        return sol;
    }
};
