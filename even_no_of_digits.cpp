class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int x=nums.size();
        int u=0;
        vector<int> arr(x);
        int count=0;
        int count1=0;
        for(int i=0;i<nums.size();i++){
            while(nums[i]>0){
                u=nums[i]%10;
                nums[i]=nums[i]/10;
                count++;
            }
                arr[i]=count;
                count=0;
        }
        for(int i=0;i<arr.size();i++){
            if(arr[i]%2==0){
                count1++;    
            }
        }
        
        // for(int i=0;i<arr.size();i++){
        //     cout<<arr[i]<<endl;
        // }
        
        return count1;
    }
};
