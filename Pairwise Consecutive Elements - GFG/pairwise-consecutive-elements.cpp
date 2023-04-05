//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

bool pairWiseConsecutive(stack<int> s);

// Driver program
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        stack<int> s;
        int n, tmp;
        cin>>n;
        while(n--){
            cin>>tmp;
	        s.push(tmp);
	    }
	    if (pairWiseConsecutive(s))cout << "Yes" << endl;
	    else cout << "No" << endl;
	    /*while (s.empty() == false)
        {
            cout << s.top() << " ";
            s.pop();
        }
        cout<<endl;*/
    }
	return 0;
}

// } Driver Code Ends


//User function Template for C++

// your task is to complete the function
// function should return true/false or 1/0
bool pairWiseConsecutive(stack<int> s)
{
    //Code here
	stack<int> aux;
	int aux_size=0;
	while (!s.empty()) {
		aux.push(s.top());
		s.pop();
		aux_size++;
	}
	bool result = true;
	while (aux_size>1) {
		int x=aux.top();
		aux.pop();
		s.push(x);
		if(abs(aux.top()-s.top())!=1){
		    result=false;
		    break;
		}
		s.push(aux.top());
		aux_size--;
		
	}
	if (aux.size() == 1)
		s.push(aux.top());
	return result;
}