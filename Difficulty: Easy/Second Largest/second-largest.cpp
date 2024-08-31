//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    int print2largest(vector<int> &arr) {
        // Code Here
        
        // brute force 
        
        // sort
        
        sort(arr.begin(), arr.end());
        
        int Largest= arr[arr.size()-1];
        
        int secondLargest=0;
        
        for(int i=arr.size()-2; i>=0;i--){
            if(arr[i]!= Largest){
                secondLargest=arr[i];
                break;
            }
          
        }
        
        
        if(secondLargest != 0){
            return secondLargest;
        }
        return -1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.print2largest(arr);
        cout << ans << endl;
    }
    return 0;
}

// } Driver Code Ends