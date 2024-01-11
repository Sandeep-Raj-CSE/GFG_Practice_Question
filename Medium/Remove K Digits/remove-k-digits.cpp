//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

//Back-end complete function Template for C++
class Solution {
  public:
    string removeKdigits(string S, int K) {
        string ans = ""; // treat ans as a stack in below for loop

        for (char c : S) {
            while (ans.length() && ans.back() > c && K) {
                ans.pop_back(); // make sure digits in ans are in ascending
                                // order
                K--;            // remove one char
            }

            if (ans.length() || c != '0') {
                ans.push_back(c);
            } // can't have leading '0'
        }

        while (ans.length() && K--) {
            ans.pop_back();
        } // make sure remove k digits in total

        return ans.empty() ? "0" : ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        int K;
        cin >> K;
        Solution obj;
        cout << obj.removeKdigits(S, K) << endl;
    }
    return 0;
}

// } Driver Code Ends