// ======================================
// LeetCode Problem: number of islands
// Language: cpp
// Link: https://leetcode.com/problems/number-of-islands/
// Synced by: LinkCode
// Date: 11/20/2026, 9:00:17 PM
// ======================================



class Solution {
public:

    void bfs(int row, int col, vector<vector<int>>& vis,
             vector<vector<char>>& grid) {

        vis[row][col] = 1;

        queue<pair<int, int>> q;
        q.push({row, col});

        int n = grid.size();
        int m = grid[0].size();

        while (!q.empty()) {

            int row = q.front().first;
            int col = q.front().second;
            q.pop();

            // Traverse 4 neighbours
            for (int delrow = -1; delrow <= 1; delrow++) {
                for (int delcol = -1; delcol <= 1; delcol++) {

                    if (abs(delrow) + abs(delcol) == 1) {

                        int nrow = row + delrow;
                        int ncol = col + delcol;

                        if (nrow >= 0 && nrow < n &&
                            ncol >= 0 && ncol < m &&
                            grid[nrow][ncol] == '1' &&
                            !vis[nrow][ncol]) {

                            vis[nrow][ncol] = 1;
                            q.push({nrow, ncol});
                        }
                    }
                }
            }
        }
    }

    int numIslands(vector<vector<char>>& grid) {

        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> vis(n, vector<int>(m, 0));

        int cnt = 0;

        for (int row = 0; row < n; row++) {
            for (int col = 0; col < m; col++) {

                if (!vis[row][col] && grid[row][col] == '1') {
                    cnt++;
                    bfs(row, col, vis, grid);
                }
            }
        }

        return cnt;
    }
};
