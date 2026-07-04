class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        unordered_map<int, unordered_set<char>> rows, cols;
        map<pair<int, int>, unordered_set<char>> box;

        for (int r = 0; r < 9; r++) {
            for (int c = 0; c < 9; c++) {
                if (board[r][c] == '.') continue; 
                pair<int, int> boxKey = {r/3, c/3};
                auto i = board[r][c];
                if (rows[r].count(i) || cols[c].count(i) ||
                    box[boxKey].count(i))
                    {return false;}

                rows[r].insert(i);
                cols[c].insert(i);
                box[boxKey].insert(i);

            }
        }
        return true;
    }
};
