//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int gcd(int a, int b) {
        // code here
        int ans=1;
        if(a==b){
            return a;
        }
    //      if(a > b)
    // {

    //     for(int i=2; i<=b;i++){
    //         if(a%i==0 && b%i==0){
    //             ans=i;
    //             continue;
    //         }
    //     }

    // }else{
    //     for(int i=2; i<=a;i++){
    //         if(a%i==0 && b%i==0){
    //             ans=i;
    //             continue;
    //         }
    //     }

    // }
   // cout<<ans<<endl;
   
//   for(int i=2; i<=min(a,b);i++){
//       if(a%i==0 && b%i==0){
//           ans=i;
//           continue;
//       }
       
//   }
//      int res=min(a,b);
//      while(res > 0){
//          if(a%res==0 && b%res==0){
//              break;
//          }
//          res=res--;
//      }
//   return res;

    while(a!=b){
        if(a > b){
            a=a-b;
        }else{
            b=b-a;
        }
    }
    
    return a;


    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int a;
        scanf("%d",&a);
        
        
        int b;
        scanf("%d",&b);
        
        Solution obj;
        int res = obj.gcd(a, b);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends