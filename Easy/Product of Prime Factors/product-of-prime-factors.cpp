//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public: 
    long long int primeProduct(int n){
        //code here
                vector<int> ans;
	    if(n < 1){
	        return 0;
	    }
	    
	    while(n % 2 == 0){
	        ans.push_back(2);
	        n /= 2;
	    }
	    
	    while(n % 3 == 0){
	        ans.push_back(3);
	        n /= 3;
	    }
	    
	    for(int i = 5; i * i <= n; i += 6){
	        while(n % i == 0){
	            ans.push_back(i);
	            n /= i;
	        }
	        
	        while(n % (i + 2) == 0){
	            ans.push_back(i + 2);
	            n /= (i + 2);
	        }
	    }
	   if(n > 1) // If n is prime
	        ans.push_back(n);
	    set<int> s(ans.begin(), ans.end());
	    vector<int> res(s.begin(), s.end());
	    long long val=1;
	    for(int i=0; i<res.size();i++){
	        val=val*res[i];
	    }
	    
	    return val;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.primeProduct(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends