//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int DivisibleByEight(string s){
        //code here
        
        int i=0;
        
        for(char c:s){
            if(c >= '0' || c <='9'){
                i=i*10+(c-'0');
            }else{
                return 1;
            }
        }
        
        if(i%4==0 && i%2==0 && i% 8==0 ){
            return 1;
        }
        return -1;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.DivisibleByEight(S)<<"\n";
    }
}
// } Driver Code Ends