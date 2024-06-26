//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    
    void dfs(int node , vector<int> adj[] , vector<bool> &visited , vector<int> &ans){
        
        // jo node viste kar gye hai usko 1 mark
        
        visited[node]=1;
        
        ans.push_back(node);
        
        for(int j=0; j<adj[node].size();j++){
            
            if(!visited[adj[node][j]]){
                dfs(adj[node][j], adj, visited , ans);
            }
            
        }
        
        
        
        
    }
     
    vector<int> dfsOfGraph(int v, vector<int> adj[]) {
        // Code here
        
        vector<int>ans;
        vector<bool>visited(v,0);
        
        dfs(0 , adj ,visited , ans );
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends