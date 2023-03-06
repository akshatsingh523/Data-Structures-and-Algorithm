class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        int n=numbers.size();
        int i=0;
        int j=n-1;
        while(j>i){
            int sum=numbers[i]+numbers[j];
            if(sum==target){
                ans.push_back(i+1);
                ans.push_back(j+1);
                // j--;
                // i++;
            }

            if(sum>target){
                j--;
            }

            else{
                i++;
            }

        }
        return ans;   
    }
};
