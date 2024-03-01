//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    int trailingZeroes(int n)
    {
        // Write Your Code here
//          int  ans=1;
//     while(n > 0){
//         ans=ans*n;
//         n=n-1;
//     }

//     cout<<ans<<endl;

//     int cnt=0;
//     while(ans > 0){
//         if(ans % 10 ==0){
//             cnt++;
//         }

//         ans=ans/10;
//     }

//   // cout<<cnt<<endl;
//   return cnt;

int ans=0;

for(int i=5; i<=n;i=i*5){
    ans=ans+n/i;
}
return ans;


    

    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        Solution ob;
        int ans  = ob.trailingZeroes(N);
        cout<<ans<<endl;
    }
    return 0;
}
// } Driver Code Ends