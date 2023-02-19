class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        map<int,int> akshat;
        int x=nums.size();
        int y=x/2;
        int z=0;
        for(int i=0;i<nums.size();i++){
            akshat[nums[i]]++;
        }
        for(auto it=akshat.begin();it!=akshat.end();it++){
            if(it->second==y){
                z=it->first;
            }

        }
        return z;
    }
};
