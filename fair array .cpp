class Solution {
public:
    int waysToMakeFair(vector<int>& nums) {
        vector<int> prefix_even;
        vector<int> prefix_odd;
        int even=0;
        int odd=0;
        int ans=0;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                even+=nums[i];
                prefix_even.push_back(even);
                prefix_odd.push_back(odd);
            }
            else{
                odd+=nums[i];
                prefix_odd.push_back(odd);
                prefix_even.push_back(even);

            }
        }
        for(int i=0;i<nums.size();i++){
            int po=0;
            int pe=0;
            if(i==0){
                po=prefix_odd[n-1];
                pe=prefix_even[n-1]-prefix_even[0];
                if(po==pe){
                    ans++;
                }
            }
            else{
                po=prefix_odd[i-1]+prefix_even[n-1]-prefix_even[i];
                pe=prefix_even[i-1]+prefix_odd[n-1]-prefix_odd[i];
                if(po==pe){
                    ans++;
                }
            }
            
        }
        return ans;
    }
};
