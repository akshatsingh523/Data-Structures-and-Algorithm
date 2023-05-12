class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        int i=0;
        int j=i+1;
        map<int,int> m;
        while(j<nums.size()){
            // cout<<nums[i]<<" "<<nums[j]<<endl;
            if(nums[i]==key){
                m[nums[j]]++;
            }
            i++;
            j++;
        }
        int b=0;
        int first=0;
        for(auto x:m){
            if(b<x.second){
                b=x.second;
                first=x.first;
            }
        }
        return first;
    }
};
