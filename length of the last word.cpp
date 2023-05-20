class Solution {
public:
    int lengthOfLastWord(string s) {
        vector<int> v;
        int count=0;
        reverse(s.begin(),s.end());
        for(int i=0;i<s.length();i++){
            if(s[i]!=' '){
                count++;
            }
            if(count>0 && s[i]==' '){
                break;
            }
        }
        return count;
    }
};
