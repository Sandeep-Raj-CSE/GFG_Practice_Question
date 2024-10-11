//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  
  
  
  void dfs(int node , vector<vector<int>>& adj , vector<int>&ans, vector<int>&vis){
      vis[node] = 1;
      
      ans.push_back(node);
      
      for(int i= 0; i<adj[node].size();i++){
          
          if(!vis[adj[node][i]]){
              dfs(adj[node][i], adj , ans , vis);
          }
      }
  }
  
  
  
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(vector<vector<int>>& adj) {
        // Code here
        int n= adj.size();
        vector<int>ans;
        
        vector<int>vis(n , 0);
        
        dfs(0 , adj , ans , vis);
        
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

        vector<vector<int>> adj(
            V); // Use vector of vectors instead of array of vectors.

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        Solution obj;
        vector<int> ans = obj.dfsOfGraph(adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends