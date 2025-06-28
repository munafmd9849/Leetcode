class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int rows = board.size(), cols = board[0].size();
        for(int i = 0; i < rows; ++i){
            for(int j = 0; j < cols; ++j){
                int count = 0, xlen = min(i + 2 , rows), ylen = min(j + 2 , cols);
                for(int x = max(0 , i - 1); x < xlen; ++x){
                    for(int y = max(0 , j - 1); y < ylen; ++y) count += (board[x][y] & 1);
                }
                if(board[i][j]){
                    if(count == 3 || count == 4) board[i][j] |= 2;
                }
                else if(count == 3) board[i][j] |= 2;
            }
        }
        for(int i = 0; i < rows; ++i){
            for(int j = 0; j < cols; ++j) board[i][j] >>= 1;
        }
    }
};