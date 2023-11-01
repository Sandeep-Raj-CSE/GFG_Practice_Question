//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
     
    void solve(string &s, char &p,int i, int &ans){
        
        // base case
        
        if(i>=s.size()){
            return ;
        }
        
        
        // recursion case
        if(s[i]==p){
            ans=i;
        }
        
        solve(s,p,i+1,ans);
    }
    
    int LastIndex(string s, char p){
        //complete the function here
        int ans=-1;
        solve(s,p,0,ans);
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        char p;
        cin >> p;
        Solution ob;
        cout << ob.LastIndex(s, p) << endl;
    }
    return 0;
}


// } Driver Code Ends