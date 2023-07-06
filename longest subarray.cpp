class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        vector<int> prefix;
        int sum=0;
        int i=0;
        int j=0;
        for(auto x:nums){
            i++;
            sum+=x;
            if(x==0){
                prefix.push_back(sum);
                sum=0;
                prefix.push_back(sum);
            }
        }
        reverse(nums.begin(),nums.end());
        sum=0;
        for(auto x:nums){
            if(x==1){
                sum+=x;
            }
            if(x==0){
                break;
            }
        }

        prefix.push_back(sum);

        if(prefix.size()==1){
            return prefix[0]-1;
        }
        
        int ans=0;
        for(int i=1;i<prefix.size()-1;i++){
            if(prefix[i]==0){
                if(prefix[i-1]+prefix[i+1]>ans)
                ans=prefix[i-1]+prefix[i+1];
            }
        }
        return ans;
    }
};
