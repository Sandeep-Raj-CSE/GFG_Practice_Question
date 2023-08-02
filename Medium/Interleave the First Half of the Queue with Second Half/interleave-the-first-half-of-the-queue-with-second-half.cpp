//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    vector<int> rearrangeQueue(queue<int> &q){
        
        int n=q.size();
        
        queue<int>nq;
        
        vector<int>ans;
        
        for(int i=0; i<(n/2);i++){
            int val=q.front();
            q.pop();
            nq.push(val);
        }
        
        
        while(!nq.empty()){
            int val=nq.front();
            nq.pop();
            
            q.push(val);
            
            val=q.front();
            q.pop();
            q.push(val);
        }
        
        
        while(!q.empty()){
            ans.push_back(q.front());
            q.pop();
        }
        
        
        return ans;
        
        
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        queue<int> q;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            q.push(a);
        }
        Solution ob;
        vector<int> ans=ob.rearrangeQueue(q);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
// } Driver Code Ends