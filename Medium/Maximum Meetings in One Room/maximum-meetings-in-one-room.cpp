//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    bool static cmp(pair<int ,pair<int, int>>a, pair<int, pair<int, int>>b){
        return a.second.first< b.second.first;
    }

    vector<int> maxMeetings(int N,vector<int> &S,vector<int> &F){
        
        int n= N;
        vector<int>ans;
        
        vector<pair<int, pair<int, int>>>v;
        for(int i=0; i<n; i++){
            
            v.push_back({S[i], {F[i], i}});
        }
        
        sort(v.begin(), v.end(), cmp);
        
        ans.push_back(v[0].second.second+ 1);
        int ansend= v[0].second.first;
        
        for(int i=1; i<n; i++){
            
            if(v[i].first>ansend){
                ans.push_back(v[i].second.second+ 1);
                ansend= v[i].second.first;
            }
        }
        sort(ans.begin(), ans.end());
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
        vector<int> S(n),F(n);
        for(int i=0;i<n;i++){
            cin>>S[i];
        }
        for(int i=0;i<n;i++){
            cin>>F[i];
        }
        Solution ob;
        vector<int> ans=ob.maxMeetings(n,S,F);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i];
            if(i!=ans.size()-1){
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends