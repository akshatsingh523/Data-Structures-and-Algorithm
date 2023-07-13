//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
#include <map>
class Solution
{
    public:
    bool isFrequencyUnique(int n, int arr[])
    {
        map<int,int> m;
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
        
        vector<int> v;
        
        for(auto x:m){
            v.push_back(x.second);
        }
        
        int flag=0;
        
        map<int,int> m1;
        
        for(auto x:m){
            m1[x.second]++;
        }
        
        for(auto x:m1){
            if(x.second>1){
                flag=1;
            }
        }
        
        if(flag==1){
            return false;
        }
        else{
            return true;
        }
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        bool ans=ob.isFrequencyUnique(n,arr);
        if(ans)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
}
// } Driver Code Ends