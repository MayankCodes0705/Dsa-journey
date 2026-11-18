// ======================================
// LeetCode Problem: number of provinces
// Language: cpp
// Link: https://leetcode.com/problems/number-of-provinces/
// Synced by: LinkCode
// Date: 11/18/2026, 9:16:22 PM
// ======================================



class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();

        vector<vector<int>> reach = isConnected;

        // Find indirect connections
        for(int k = 0; k < n; k++) {
            for(int i = 0; i < n; i++) {
                for(int j = 0; j < n; j++) {
                    reach[i][j] = reach[i][j] ||
                                  (reach[i][k] && reach[k][j]);
                }
            }
        }

        int provinces = 0;

        // Count component representatives
        for(int i = 0; i < n; i++) {
            bool alreadyCounted = false;

            for(int j = 0; j < i; j++) {
                if(reach[i][j]) {
                    alreadyCounted = true;
                    break;
                }
            }

            if(!alreadyCounted) provinces++;
        }

        return provinces;
    }
};
