//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    
    bool cyclefind(int node , int parent , vector<int>adj[] , vector<bool>&visited){
        
        visited[node]= 1;
        
        for(int i=0; i< adj[node].size();i++){
            
            if(parent == adj[node][i]){
                continue;
            }
            
            
            if(visited[adj[node][i]]){
                return true;
            }
            
            
            if(cyclefind(adj[node][i], node , adj , visited)==1){
                return 1;
            }
            
            
        
        }
        
        return 0;
        
    }
    
    
    bool isCycle(int v, vector<int> adj[]) {
        // Code here
        
        vector<bool>visited(v,0);
        
        
        for(int i=0; i <v ;i++){
            
            if(!visited[i]){
                
                if(cyclefind(i, -1 , adj , visited)){
                    return 1;
                }
                
            }
        }
        return  0;
        
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
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends