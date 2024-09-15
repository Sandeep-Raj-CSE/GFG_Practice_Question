//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  
    void solve(int i , vector<int>&arr , vector<int>&ds , int n , int sum){
        
        if(i==n){
            ds.push_back(sum);
            return;
        }
        
        
        solve(i+1, arr , ds , n, sum + arr[i]);
        solve(i+1, arr , ds , n , sum);
        
    }
    vector<int> subsetSums(vector<int> arr, int n) {
        // Write Your Code here
        
        vector<int>ds;
         int sum = 0;
        
        solve(0, arr , ds , n, sum);
        
        return ds;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr, N);
        sort(ans.begin(), ans.end());
        for (auto sum : ans) {
            cout << sum << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends