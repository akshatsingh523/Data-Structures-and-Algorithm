class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> dis;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            dis.insert(nums[i]);
        }
        for(auto x:dis){
            ans.push_back(x);
        }
        for(auto x:ans){
            cout<<x;
        }
        if(ans.size()<3)
        return ans[ans.size()-1];
        else
        return ans[ans.size()-3];
    }
};
