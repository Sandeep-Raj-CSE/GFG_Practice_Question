//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:

    bool dfs(int node , vector<int>&color , vector<int>adj[]){
        for(int i=0; i<adj[node].size();i++){
            if(color[adj[node][i]]==-1){
                color[adj[node][i]]= (color[node]+1)%2;
                if(!dfs(adj[node][i], color, adj))
                    return 0;
                
            }else{
                if(color[adj[node][i]]==color[node]){
                    return 0;
                }
            }
        }
        return 1;
    }
	bool isBipartite(int V, vector<int>adj[]){
	    // Code here
	    
	    vector<int>color(V,-1);
	    
	    for(int i=0; i<V;i++){
	       // color[i]=i;
	        if(color[i]==-1){
	            color[i]=0;
	            if(!dfs(i, color, adj)){
	                return 0;
	            }
 
	        }
	    }
	    
	    
	    return 1;
	    
	    
	    
	    
	    
	}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isBipartite(V, adj);    
		if(ans)cout << "1\n";
		else cout << "0\n";  
	}
	return 0;
}
// } Driver Code Ends