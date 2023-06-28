//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
        
        
        vector<int>ans;
        
        sort(arr.begin(),arr.end());
        
        // repetaing element
        
        for(int i=0; i<n;i++){
            
            if(arr[i]==arr[i+1]){
                ans.push_back(arr[i]);
            }
        }
        
        
        // mising element
        
        // int total = n*(n+1)/2;
        
        // int sum=0;
        
        // int finalsum= accumulate(arr.begin(), arr.end(), 0);
        
        // int res= abs(total-finalsum);
        
        // ans.push_back(res);
        
        
        
        // another way
        
         unordered_set<int>s;


         for (auto i: arr) {
        s.insert(i);
    }
        
        for(int i=1;i<=n;i++){
            if(!s.count(i)){
                ans.push_back(i);
                break;
            }
        }
        
       
        
        
        return ans;
        
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends