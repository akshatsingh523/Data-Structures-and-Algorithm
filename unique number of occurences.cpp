class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> f;
        vector<int> ans;
        int flag=0;
        for(int i=0;i<arr.size();i++){
            f[arr[i]]++;
        }
        for(auto x:f){
            ans.push_back(x.second);
        }
        
        int count=0;
        for(int i=0;i<ans.size();i++){
            for(int j=i+1;j<ans.size();j++){
                if(ans[i]==ans[j]){
                    count++;
                    break;
                }
            }
            if(count>0){
                flag=1;
            }
        }

        if(flag==1){
            return false;
        }
        return true;
    }
};
