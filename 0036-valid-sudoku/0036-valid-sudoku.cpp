class Solution{
    public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<char, vector<pair<int, int>>> hash;

        for (int i = 0; i < board.size(); i++)
        {
            for (int j = 0; j < board[i].size(); j++)
            {
                if(board[i][j] != '.'){
                    auto it = hash.find(board[i][j]);
                    if (it != hash.end()) {
                        // cout << "Found " << it->first << " at positions: ";
                        for (const auto& pos : it->second) {
                            // cout << "(" << pos.first << ", " << pos.second << ") ";
                            if((pos.first == i || pos.second == j || (pos.first / 3 == i / 3 && pos.second / 3 == j / 3))){
                                return false;
                            }
                        }
                        hash[board[i][j]].push_back({i,j});
                        // cout << endl;
                    } else {
                        hash[board[i][j]].push_back({i,j});
                    }
                }
            }
        }
        return true;
    }
};
