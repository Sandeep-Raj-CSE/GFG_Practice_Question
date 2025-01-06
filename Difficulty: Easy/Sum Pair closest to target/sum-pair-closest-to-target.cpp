//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    vector<int> sumClosest(vector<int>& arr, int target) {
        // code here
        if(arr.size()<2) return {}; 
        int n = arr.size(); 
        sort(arr.begin(), arr.end());
        
        int left = 0, right = n-1; 
        vector<int>ans;
        
        int closeSum = INT_MAX; 
        int maxDiff = INT_MIN;
        
        while(left < right){
            int sum = arr[left] + arr[right]; 
            if(abs(sum - target) < abs(closeSum - target)){
                closeSum = sum;
                ans = {arr[left], arr[right]}; 
                maxDiff = arr[right] - arr[left];
                
            }else if(abs(sum-target) == abs(closeSum - target)){
                int diff = arr[right] - arr[left]; 
                if(diff > maxDiff){
                    ans={arr[left], arr[right]};
                    maxDiff = diff;
                }
            }
            if(sum<target) left++;
            else right--;
        }
        
        return ans;
        
    }
};

//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int target = stoi(ks);
        Solution ob;
        vector<int> ans = ob.sumClosest(arr, target);
        if (ans.empty()) {
            cout << "[]";
        } else {
            for (auto it : ans) {
                cout << it << " ";
            }
        }
        cout << endl;
        cout << "~\n";
    }

    return 0;
}
// } Driver Code Ends