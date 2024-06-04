//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    
    // bool cyclefind(int node , int parent , vector<int>adj[] , vector<bool>&visited){
        
    //     visited[node]= 1;
        
    //     for(int i=0; i< adj[node].size();i++){
            
    //         if(parent == adj[node][i]){
    //             continue;
    //         }
            
            
    //         if(visited[adj[node][i]]){
    //             return true;
    //         }
            
            
    //         if(cyclefind(adj[node][i], node , adj , visited)==1){
    //             return 1;
    //         }
            
            
        
    //     }
        
    //     return 0;
        
    // }
    
    
    // BFS
    
    bool BFS(int i, vector<bool>&visited, vector<int> adj[]){
        
        queue<pair<int,int>> q;
        visited[i]=1;
        
        q.push(make_pair(i, -1)); // node , parent
        
        while(!q.empty()){
            int node = q.front().first;
            int parent = q.front().second;
            
            q.pop();
            
            for(int i=0; i<adj[node].size();i++){
                
                // parent ka ignore karo bsdk
                
                if(parent == adj[node][i]){
                    continue;
                }
                
                // agar visited mil gya bc to return 1 kar bkl
                
                if(visited[adj[node][i]]==1){
                    return 1;
                }
                
                
                visited[adj[node][i]]=1;
                
                q.push({adj[node][i], node});
            }
        }
        
        return 0;
        
        
        
    }
    
    
    bool isCycle(int v, vector<int> adj[]) {
        // Code here
        
        vector<bool>visited(v,0);
        
        
        for(int i=0; i<v;i++){
            
            if(!visited[i]){
                if(BFS(i, visited, adj)==1){
                    return 1;
                }
            }
        }
        
        return 0;
       
        
        
        // for(int i=0; i <v ;i++){
            
        //     if(!visited[i]){
                
        //         if(cyclefind(i, -1 , adj , visited)){
        //             return 1;
        //         }
                
        //     }
        // }
        // return  0;
        
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