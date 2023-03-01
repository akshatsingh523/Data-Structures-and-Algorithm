class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        int count=0;
        int k=0;
        vector<pair<int,int>> ans;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0){
                ans.push_back({arr[i],0});
            }
            else{
                int n=arr[i];
                while(n>0){
                    if(n%2==1){
                        count++;
                    }
                    n=n/2;
                }
                ans.push_back({arr[i],count});
                count=0;
            }
        }

        sort(ans.begin(),ans.end(),[](const pair<int,int>& a,const pair<int,int>& b){
            if(a.second==b.second){
                return a.first<b.first;
            }
            return a.second<b.second;
        });

        for(auto x:ans){
            cout<<x.first<<" "<<x.second<<endl;
        }

        vector<int> ans3;
        for(auto x:ans){
            ans3.push_back(x.first);
        }

        return ans3;
    }
};
