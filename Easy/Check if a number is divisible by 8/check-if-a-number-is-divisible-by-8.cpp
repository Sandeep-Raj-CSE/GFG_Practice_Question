//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int DivisibleByEight(string str1){
        //code here
        // long long myint = stoi(str1);
        
        // if(myint% 2 == 0 && myint % 4 ==0 && myint%8==0){
        //     return 1;
        // }
        
        // return -1;
        
        int i = 0;
 
    // Traversing string
    for (char c : str1) {
        // Checking if the element is number
        if (c >= '0' && c <= '9') {
            i = i * 10 + (c - '0');
        }
        // Otherwise print bad output
        else {
            
            return 1;
        }
    }
    if(i%2==0 && i%4==0 && i%8==0){
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