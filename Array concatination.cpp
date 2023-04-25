class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {

        int i=0;
        int j=nums.size()-1;
        int leni=0;
        int lenj=0;
        long long num=0;

        if(nums.size()%2!=0){
            num+=nums[(nums.size()/2)];
        }

        while(j>i){
            leni=to_string(nums[i]).length();
            lenj=to_string(nums[j]).length();
            if(lenj>1){
                num+=nums[i]*pow(10,lenj)+nums[j];
            }
            else{
                num+=nums[i]*pow(10,1)+nums[j];
            }
            cout<<num<<" ";
            i++;
            j--;
        }

        return num;
    }
};
