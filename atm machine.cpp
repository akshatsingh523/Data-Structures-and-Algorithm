#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
    	    int n,k;
    	    cin>>n>>k;
    	    int ai[n];
    	    for(int i=0;i<n;i++){
    	         cin>>ai[i];
    	    }
    	    for(int i=0;i<n;i++){
    	            if(ai[i]<=k){
    	                k=k-ai[i];
    	                cout<<1;
    	            }
    	            else
    	            cout<<0;
    	    }
    	    cout<<endl;
	 }
	return 0;
}
