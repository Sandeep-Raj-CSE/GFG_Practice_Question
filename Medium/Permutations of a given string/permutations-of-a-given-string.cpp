//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	void permute(string &s,int l,int r,set<string>&ans){
	    
	    if(l==r){
	        ans.insert(s);
	        return;
	    }
	    
	    else{
	        for(int i=l; i<=r;i++){
	            swap(s[l],s[i]);
	            
	            permute(s,l+1,r,ans);
	            
	            swap(s[l],s[i]);
	            
	            
	        }
	    }
	}
		vector<string>find_permutation(string s)
		{
		    // Code here there
		   // set<string>se;
		    sort(s.begin(),s.end());
		    set<string>ans;
		    int n=s.length();
		    permute(s,0,n-1,ans);
		    vector<string>res(ans.begin(),ans.end());
		    return res;
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    sort(ans.begin(),ans.end());
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends