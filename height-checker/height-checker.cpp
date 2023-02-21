class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>cmp(heights.begin(),heights.end());
        sort(cmp.begin(),cmp.end());
        int count=0;
        for(int i=0;i<heights.size();i++){
            if(heights[i]!=cmp[i]){
                count++;
            }
        }
        return count;
    }
};