//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool isPrime(int n) {
        // code here
        
         // Base cases
    if (n <= 1) return false; // 1 and numbers less than 1 are not prime
    if (n == 2 || n == 3) return true; // 2 and 3 are prime numbers

    // Check divisors from 2 to sqrt(n)
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false; // If divisible, it's not a prime number
        }
    }

    return true; // If no divisors found, it's a prime number
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << (ob.isPrime(N) ? "true" : "false") << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends