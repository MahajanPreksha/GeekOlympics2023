#Name of the problem: BFS of graph
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        queue<int> q;
        q.push(0);
        vector<bool> vis(V, 0);
        vis[0] = 1;
        vector<int> res;
        while(!q.empty()){
            auto curr = q.front();
            q.pop();
            res.push_back(curr);
            for(auto it: adj[curr]){
                if(!vis[it]){
                    vis[it] = 1;
                    q.push(it);
                }
            }
        }
        return res;
    }
};
