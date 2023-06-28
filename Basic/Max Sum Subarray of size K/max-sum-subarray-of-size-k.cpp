//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int k, vector<int> &Arr , int N){
        
        
        //i ---> start of window and j ---> end of window
        int i = 0 ; 
        int j = 0 ;
        long sum = 0 ;
        long mx= INT_MIN ; 
        
        while(j<N)
        {
          
          //do desired calculation 
          sum = sum + Arr[j];
          
          if(j-i+1 < k ) j++ ; // increas the window size.
          
          
          // when we get the given window size.
          else if(j-i+1 == k )
          {
              mx = max(sum,mx);
              //maintain the window size.
              sum = sum - Arr[i];
              i++;
              j++;
          }
          
        }
        
        return mx;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends