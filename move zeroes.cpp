class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int flag=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)
           { flag++;}
        }
    vector<int>::iterator new_end;
    new_end = remove(nums.begin(),nums.end(),0);
    for(int i=0;i<flag;i++){
        nums.pop_back();
    }
    for(int i=0;i<flag;i++){
        nums.push_back(0);
    }
    }
};
