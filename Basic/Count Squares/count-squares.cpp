//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int countSquares(int N) {
        // code here
        
        // int ans=0;
        
        // for(int i=1; i<N;i++){
            
        //     if(i*i < N){
        //         ans++;
        //     }
        // }
        
        // return ans;
        
        int i=1;
        
        
        int ans=0;
        
        while(i*i <N){
            ans++;
            
            i++;
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.countSquares(N) << endl;
    }
    return 0;
}
// } Driver Code Ends