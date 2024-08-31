//{ Driver Code Starts
#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int largest(vector<int> &arr) {
        
        // code here
        
        // Brute force = TC O(nlogn)
        // space complexity = o(1) + stack space complexity
        
        // sort the array
        sort(arr.begin(), arr.end());
        
        //1 7 8 56 90
        
        int ans = arr[arr.size()-1];
        
        return ans;
        
    }
    
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        string input;
        int num;
        vector<int> arr;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }

        Solution ob;
        cout << ob.largest(arr) << endl;
    }
    return 0;
}

// } Driver Code Ends