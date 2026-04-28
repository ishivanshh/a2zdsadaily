#include <iostream>
#include <vector>
#include <queue>
using namespace std;
/*
vector<int> topoSort(int V, vector<vector<int>>& adj) {
    vector<int> indegree(V, 0);
    
    // Step 1: Calculate indegree of each node
    for(int i = 0; i < V; i++) {
        for(auto it : adj[i]) {
            indegree[it]++;
        }
    }
    // Step 2: Push nodes with indegree 0 into queue
    queue<int> q;
    for(int i = 0; i < V; i++) {
        if(indegree[i] == 0) {
            q.push(i);
        }
    }
    
    vector<int> topo;
    
    // Step 3: BFS
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
    
    return topo;
}
*/
class Solution {
public:
    bool dfs(int node, vector<vector<int>> &adj, vector<int> &vis, vector<int> &pathVis) {
        vis[node] = 1;
        pathVis[node] = 1;
        // node -> it (neighbour)
        for (auto it : adj[node]) {
            // If not visited → DFS
            if (!vis[it]) {
                if (dfs(it, adj, vis, pathVis)) return true;
            }
            // If already in current path → cycle
            else if (pathVis[it]) {
                return true;
            }
        }

        // Backtrack
        pathVis[node] = 0;
        return false;
    }

    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);

        // Build graph
        for (auto &it : prerequisites) {
            adj[it[1]].push_back(it[0]); // b → a
        }

        vector<int> vis(numCourses, 0);
        vector<int> pathVis(numCourses, 0);

        // Check for cycle in every component
        for (int i = 0; i < numCourses; i++) {
            if (!vis[i]) {
                if (dfs(i, adj, vis, pathVis)) {
                    return false; // cycle found
                }
            }
        }

        return true; // no cycle
    }
};
int main() {
    int V = 6;
    vector<vector<int>> adj(V);

    // Example graph
    adj[5].push_back(2); // 5 -> 2
    adj[5].push_back(0); // 5 -> 0
    adj[4].push_back(0); // 4 -> 0
    adj[4].push_back(1); // 4 -> 1
    adj[2].push_back(3); // 2 -> 3
    adj[3].push_back(1); // 3 -> 1

    vector<int> result = topoSort(V, adj);

    for(auto x : result) {
        cout << x << " ";
    }

    return 0;
}