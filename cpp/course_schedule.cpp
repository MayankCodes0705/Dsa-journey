// ======================================
// LeetCode Problem: course schedule
// Language: cpp
// Link: https://leetcode.com/problems/course-schedule/
// Synced by: LinkCode
// Date: 11/24/2026, 7:20:58 PM
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

        // Calculate indegree of every node
        vector<int> indegree(V, 0);

        for(int i = 0; i < V; i++) {
            for(auto it : adj[i]) {
                indegree[it]++;
            }
        }

        queue<int> q;

        // Push all nodes having indegree 0
        for(int i = 0; i < V; i++) {
            if(indegree[i] == 0) {
                q.push(i);
            }
        }

        int count = 0;

        // Apply BFS
        while(!q.empty()) {

            int node = q.front();
            q.pop();

            count++;

            for(auto it : adj[node]) {

                indegree[it]--;

                if(indegree[it] == 0) {
                    q.push(it);
                }
            }
        }

        // If all courses are completed, return true
        return count == V;
    }
};