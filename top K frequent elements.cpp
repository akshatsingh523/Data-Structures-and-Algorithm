class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        map<int,int> m;
        if(nums.size()==k){
            for(auto x:nums){
                ans.push_back(x);
            }
            return ans;
        }

        for(auto x:nums){
            m[x]++;
        }

        multimap<int,int> m1;

        for(auto x:m){
            m1.emplace(x.second,x.first);
        }

        int count=m.size();

        for(auto x:m1){
            if(count<=k){
                ans.push_back(x.second);
            }
            count--;
        }
        
        return ans;
    }
};
