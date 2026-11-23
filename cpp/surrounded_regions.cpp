// ======================================
// LeetCode Problem: surrounded regions
// Language: cpp
// Link: https://leetcode.com/problems/surrounded-regions/
// Synced by: LinkCode
// Date: 11/23/2026, 6:41:18 PM
// ======================================



class Solution {
public:
    void solve(vector<vector<char>>& board) {

        int n = board.size();
        int m = board[0].size();

        queue<pair<int,int>> q;

        // Find all boundary O's
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {

                if((i == 0 || i == n-1 || j == 0 || j == m-1)
                   && board[i][j] == 'O') {

                    q.push({i, j});
                    board[i][j] = '#';
                }
            }
        }

        int drow[] = {-1, 0, +1, 0};
        int dcol[] = {0, +1, 0, -1};

        // BFS
        while(!q.empty()) {

            int r = q.front().first;
            int c = q.front().second;

            q.pop();

            for(int i = 0; i < 4; i++) {

                int nrow = r + drow[i];
                int ncol = c - dcol[i];

                if(nrow >= 0 && nrow < n &&
                   ncol >= 0 && ncol < m &&
                   board[nrow][ncol] == 'O') {

                    q.push({nrow, ncol});
                    board[nrow][ncol] = '#';
                }
            }
        }

        // Final conversion
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {

                if(board[i][j] == 'O')
                    board[i][j] = 'X';

                else if(board[i][j] == '#')
                    board[i][j] = 'O';
            }
        }
    }
};
