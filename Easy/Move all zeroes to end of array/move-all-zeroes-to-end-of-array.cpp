//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    // code here
	   // vector<int>ans;
	   // int cnt=0;
	   // for(int i=0; i<n;i++){
	   //     if(arr[i]==0){
	            
	   //         for(int j=i+1; j<n;j++){
	                
	   //             if(arr[j]!=0){
	   //                  swap(arr[i],arr[j]);
	   //             }
	                
	               
	                
	   //         }
	          
	   //     }
	   // }
	    
	  //  cout<<cnt<<endl;
	   //  for(int i=0; i<ans.size();i++){
	   //     cout<<ans[i]<<" ";
	   // }
	    
	   // for(int i=0; i<n;i++){
	   //     if(arr[i]==0){
	   //         ans.push_back(arr[n-cnt]);
	   //     }
	   // }
	   
	   
	   // for on time 
	   
	   // track the zero
	   
	   int cnt=0;
	   
	   for(int i=0; i<n;i++){
	       if(arr[i]!=0){
	           swap(arr[i],arr[cnt]);
	           cnt++;
	       }
	   }
	    
	   
	}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.pushZerosToEnd(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends