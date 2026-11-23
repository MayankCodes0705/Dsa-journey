// ======================================
// LeetCode Problem: is graph bipartite
// Language: cpp
// Link: https://leetcode.com/problems/is-graph-bipartite/
// Synced by: LinkCode
// Date: 11/23/2026, 7:51:31 PM
// ======================================



class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {

        int V = graph.size();

        vector<int> color(V, -1);

        for(int i = 0; i < V; i++) {

            if(color[i] == -1) {

                queue<int> q;

                q.push(i);
                color[i] = -1;

                while(!q.empty()) {

                    int node = q.front();
                    q.pop();

                    for(auto it : graph[node]) {

                        if(color[it] == -1) {

                            color[it] = !color[node];
                            q.push(it);
                        }

                        else if(color[it] == color[node]) {

                            return false;
                        }
                    }
                }
            }
        }

        return true;
    }
};
