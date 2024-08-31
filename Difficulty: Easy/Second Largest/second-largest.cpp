//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    int print2largest(vector<int> &arr) {
        // Code Here
        
        // brute force 
        
        // sort
        
       /* sort(arr.begin(), arr.end());
        
        int Largest= arr[arr.size()-1];
        
        int secondLargest=0;
        
        for(int i=arr.size()-2; i>=0;i--){
            if(arr[i]!= Largest){
                secondLargest=arr[i];
                break;
            }
          
        }
        
        
        if(secondLargest != 0){
            return secondLargest;
        }
        return -1;
        
        */
        
        // Better solution T.C = 0(2N)
        
        // find the lagest element
        
      /*  int lar= arr[0];
        
        for(int i=0; i<arr.size();i++){
            if(arr[i] > lar){
                lar = arr[i];
            }
        }
        
        
        int slar=-1;
        
        for(int i=0; i<arr.size();i++){
            
            if(arr[i] > slar && arr[i]!=lar){
                slar=arr[i];
            }
        }
        
        return slar;
        
        
        */
        
        // Better solution
        
        int lar= arr[0];
        int slar=-1;
        
        for(int i=0; i<arr.size();i++){
            
            if(arr[i] > lar){
                slar=lar;
                lar=arr[i];
            }else if(arr[i] < lar &&  arr[i] > slar){
                slar=arr[i];
            }
        }
        
        return slar;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.print2largest(arr);
        cout << ans << endl;
    }
    return 0;
}

// } Driver Code Ends