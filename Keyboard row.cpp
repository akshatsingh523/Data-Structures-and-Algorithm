class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        int c1=0;
        int c2=0;
        int c3=0;
        vector<string> ans;
        string s="";
        for(int j=0;j<words.size();j++){
          c1=0;c2=0;c3=0;
            s=words[j];
            for(int i=0;i<s.length();i++){
                if (s[i] == 'a' || s[i] == 's' || s[i] == 'd' || s[i] == 'f' || s[i] == 'g' || s[i] == 'h' || s[i] == 'j' || s[i] == 'k' || s[i] == 'l' || s[i] == 'A' || s[i] == 'S' || s[i] == 'D' || s[i] == 'F' || s[i] == 'G' || s[i] == 'H' || s[i] == 'J' || s[i] == 'K' || s[i] == 'L') c2++;
                else if (s[i] == 'q' || s[i] == 'w' || s[i] == 'e' || s[i] == 'r' || s[i] == 't' || s[i] == 'y' || s[i] == 'u' || s[i] == 'i' || s[i] == 'o' || s[i] == 'p' || s[i] == 'Q' || s[i] == 'W' || s[i] == 'E' || s[i] == 'R' || s[i] == 'T' || s[i] == 'Y' || s[i] == 'U' || s[i] == 'I' || s[i] == 'O' || s[i] == 'P') c1++;
                else c3++;
            }
            if(c1==s.length() || c2==s.length() || c3==s.length()){
                ans.push_back(s);
            }
        }
        return ans;
    }
};








