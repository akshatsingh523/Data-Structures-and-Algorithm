class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        int i=0;
        int j=nums.size()-1;
        double avg=0;
        map<double,int> m;
        sort(nums.begin(),nums.end());
        while(i<=j){
            // cout<<nums[i]<<" "<<nums[j]<<endl;
            avg=(nums[i]+nums[j])/2.0;
            m[avg]++;
            avg=0;
            i++;
            j--;
        }
        for(auto x:m){
            cout<<x.first<<" "<<x.second<<endl;
        }
        return m.size();
    }
};
