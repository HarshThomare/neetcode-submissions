class Solution {
public:
    int characterReplacement(string s, int k) {
    int longest = 0;
    unordered_map<char, int> c_map;
    int l = 0, maxfreq = 0;
    for (int i = 0; i < s.size(); i++) {
        c_map[s[i]]++;
        maxfreq = max(maxfreq, c_map[s[i]]);
        while ((i - l + 1) - maxfreq > k){ // length - maxfreq = k
            c_map[s[l]]--;
            l++;
        }
        longest = max(longest, (i - l + 1));
    }
    return longest;
    }
};
