//{ Driver Code Starts
#include<iostream>
#include<stack>
using namespace std;
void push(stack<int>& s,int a);
bool isFull(stack<int>& s,int n);
bool isEmpty(stack<int>& s);
int pop(stack<int>& s);
int getMin(stack<int>& s);
//This is the STL stack (http://quiz.geeksforgeeks.org/stack-container-adaptors-the-c-standard-template-library-stl/).
stack<int> s;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a;
		cin>>n;
		while(!isEmpty(s)){
		    pop(s);
		}
		while(!isFull(s,n)){
			cin>>a;
			push(s,a);
		}
		cout<<getMin(s)<<endl;
	}
}
// } Driver Code Ends


void push(stack<int>& s, int a){
	// Your code goes here

	s.push(a);
}

bool isFull(stack<int>& s,int n){
	// Your code goes here
	
	if(s.size()==n){
	    return true;
	}else{
	    return false;
	}
}

bool isEmpty(stack<int>& s){
	// Your code goes here
	
	if(s.empty()){
	    return true;
	}else{
	    return false;
	}
}

int pop(stack<int>& s){
	// Your code goes here
	int ans=s.top();
	s.pop();
	return ans;
}

int getMin(stack<int>& s){
	// Your code goes here
	
	stack<int>ref;
	int mini = (int)1e9+7;
	while(!s.empty()){
	    mini = min(mini, s.top());
	    ref.push(s.top());
	    s.pop();
	}
	while(!ref.empty()){
	    s.push(ref.top());
	    ref.pop();
	}
	return mini;	
	
	
	
}