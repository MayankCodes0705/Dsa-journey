// ======================================
// LeetCode Problem: course schedule
// Language: cpp
// Link: https://leetcode.com/problems/course-schedule/
// Synced by: LinkCode
// Date: 11/26/2026, 6:58:31 PM
// ======================================


class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {

        int V = numCourses;

        vector<int> adj[V];

        // Build the adjacency list
        for(auto it : prerequisites) {
            adj[it[1]].push_back(it[0]);
        }

        // Calculate indegree
        vector<int> indegree(V, 0);

        for(int i = 0; i < V; i++) {
            for(auto it : adj[i]) {
                indegree[it]++;
            }
        }

        queue<int> q;

        // Push nodes with indegree 0
        for(int i = 0; i < V; i++) {
            if(indegree[i] == 0) {
                q.push(i);
            }
        }

        vector<int> topo;

        // Apply BFS
        while(!q.empty()) {

            int node = q.front();
            q.pop();

            topo.push_back(node);

            for(auto it : adj[node]) {

                indegree[it]--;

                if(indegree[it] == 0) {
                    q.push(it);
                }
            }
        }

        return topo.size() == V;
    }
};