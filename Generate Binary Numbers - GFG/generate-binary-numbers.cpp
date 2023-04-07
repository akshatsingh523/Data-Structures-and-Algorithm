//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends

//Function to generate binary numbers from 1 to N using a queue.
vector<string> generate(int N)
{
    queue<string> q;
    q.push("1");
    vector<string> s; 
    
    string s1="";
    while(N--){
        //storing the front element of queue and popping it.
		s1=q.front(); 
		q.pop();
		//adding the popped element in answer.
		s.push_back(s1);
        
        //storing the front element of queue in beginning
        //of iteration in both s1 and s2.
		string s2=s1;
		
		//generating the next two binary numbers by adding â€œ0â€ and â€œ1â€ to the
		//existing strings s1 and s2 and pushing them into queue.
		q.push(s1.append("0")); 
		q.push(s2.append("1"));
    }
    return s;
}



//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<string> ans = generate(n);
		for(auto it:ans) cout<<it<<" ";
		cout<<endl;
	}
	return 0;
}
// } Driver Code Ends