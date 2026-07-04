class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) return false;

        unordered_map<char, int> window, s1_vals;
        int window_sz = s1.size();

        for (int i = 0; i < window_sz; i++) {
            s1_vals[s1[i]]++;
            window[s2[i]]++;
        }

        // Slide the window across s2
        for (int i = window_sz; i < s2.size(); i++) {
            if (window == s1_vals) return true;

            // Add the new character
            window[s2[i]]++;
            
            // Remove the leftmost character
            char left_char = s2[i - window_sz];
            window[left_char]--;
            
            // CRITICAL: Remove the key if count is 0 so map comparison works
            if (window[left_char] == 0) {
                window.erase(left_char);
            }
        }

        // Final check for the last window position
        return window == s1_vals;
    }
};
