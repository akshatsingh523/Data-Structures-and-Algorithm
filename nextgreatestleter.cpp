class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char ans;
        int flag=0;
        for(auto x:letters){
            if(x>target){
                flag=1;
                ans=x;
                break;
            }
        }
        if(flag==1)
        return ans;
        else
        return letters[0];
    }
};
