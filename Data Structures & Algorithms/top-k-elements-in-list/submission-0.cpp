class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map<int, int> freqMap;
        for (int num : nums) {
            freqMap[num]++;
        }

        // 2. TRANSFER MAP CONTENTS TO A VECTOR
        // The std::unordered_map cannot be directly sorted by its value, 
        // so we copy its (key, value) pairs into a vector of pairs.
        std::vector<std::pair<int, int>> freqVector;
        for (const auto& pair : freqMap) {
            freqVector.push_back(pair);
        }
        
        // 3. SORT THE VECTOR
        // Sort by frequency (pair.second) in descending order.
        std::sort(freqVector.begin(), freqVector.end(), 
            [](const std::pair<int, int>& a, const std::pair<int, int>& b) {
                return a.second > b.second; // descending order
            });

        // 4. COLLECT TOP K ELEMENTS
        std::vector<int> solution;
        
        // We determine the actual number of elements to take: k or the total number of unique elements.
        // The cast is needed to resolve the 'size_type' vs 'int' comparison (as per your earlier error).
        size_t elementsToTake = std::min(freqVector.size(), static_cast<size_t>(k));

        for (size_t i = 0; i < elementsToTake; ++i) {
            // The number is the first element of the pair (pair.first)
            solution.push_back(freqVector[i].first);
        }

        return solution;
    }
};
