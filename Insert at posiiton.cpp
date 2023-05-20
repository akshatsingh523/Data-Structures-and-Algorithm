class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i=0;
        int j=nums.size()-1;
        int idx=-1;
        // if(nums.size()==1){
        //     if(target<=nums[0]){
        //         return 0;
        //     }
        //     else{
        //         return 1;
        //     }
        // }
        // if(nums.size()==2){
        //     if(nums[0]>target){
        //         return 0;
        //     }
        //     if(nums[1]<target){
        //         return 2;
        //     }
        //     if(target>nums[0] && target<nums[1]){
        //         return 1;
        //     }
        // }
        while(j>=i){
            if(nums[i]==target){
                idx=i;
                break;
            }
            if(nums[j]==target){
                idx=j;
                break;
            }
            if(nums[i]!=target && nums[j]!=target){
                if(nums[i]>target){
                    idx=i;
                    break;
                }
                if(nums[j]<target){
                    idx=j+1;
                    break;
                }
                if(nums[i]<target && nums[j]>target && j-i==1){
                    idx=i+1;
                    break;
                }
                i++;
                j--;
            }
            // if(i==j)
        }
        
        return idx;
    }
};
