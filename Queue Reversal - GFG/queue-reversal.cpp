//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;
queue<int> rev(queue<int> q);
int main()
{
    int test;
    cin>>test; 
    while(test--)
    {
    queue<int> q; 
    int n, var; 
    cin>>n; 
    while(n--)
    {
        cin>>var; 
        q.push(var);
    }
    queue<int> a=rev(q); 
    while(!a.empty())
    {
        cout<<a.front()<<" ";
        a.pop();
    }
    cout<<endl; 
    }
}
// } Driver Code Ends


//function Template for C++

//Function to reverse the queue.
queue<int> rev(queue<int> q)
{
    // add code here.
    stack<int> s;
    // queue<int> qw;
    int d=q.size();
    for(int i=0;i<d;i++){
        int x=q.front();
        q.pop();
        s.push(x);
        // cout<<x;
    }
    
    
    for(int i=0;i<d;i++){
        int x=s.top();
        s.pop();
        q.push(x);
    }
    
    return q;
}