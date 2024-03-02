//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// #include <bits/stdc++.h>

// class Solution{
// 	public:
// 	vector<int>AllPrimeFactors(int n) {
// 	    // Code here
// 	    vector<int>ans;
// 	    if(n < 1){
// 	        return ans ;
// 	    }
	    
// 	    while(n%2==0){
// 	        ans.push_back(2);
// 	        n=n/2;
// 	    }
	    
// 	    while(n%3==0){
// 	        ans.push_back(3);
// 	        n=n/3;
// 	    }
	    
	    
// 	    for(int i=5; i*i<=n;i++){
	        
// 	        // 
// 	        while(n%i==0){
// 	            ans.push_back(i);
// 	            n=n/i;
// 	        }
	        
// 	        while(n%(i+2) ==0){
// 	            ans.push_back(i+2);
// 	            n=n/(i+2);
// 	        }
	        
	        
// 	    }
	   
	  
// 	       set<int>s(ans.begin(),ans.end());
	       
// 	       vector<int>res(s.begin(),s.end());
// 	       return res;
	       
	       
	   
	    
// 	}
// };

#include<bits/stdc++.h>
using namespace std;

class Solution{
	public:
	vector<int> AllPrimeFactors(int n) {
	    vector<int> ans;
	    if(n < 1){
	        return ans;
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
	    return res;
	}
};



//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		long long int N;
		cin >> N;
		Solution ob;
		vector<int>ans = ob.AllPrimeFactors(N);
		for(auto i: ans)
			cout << i <<" ";
		cout <<"\n";
	}  
	return 0;
}
// } Driver Code Ends