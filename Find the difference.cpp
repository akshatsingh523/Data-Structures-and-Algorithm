class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<char> s1;
        vector<char> s2;
        int i=0;
        int j=0;
        for(auto x:s){
            s1.push_back(x);
        }

        for(auto x:t){
            s2.push_back(x);
        }

        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());

        char c;

        int flag=0;

        while(i<s.length()){
            if(s1[i]==s2[j]){
                i++;
                j++;
            }
            else{
                flag=1;
                c=s2[j];
                break;
            }
        }
        if(flag!=1){
            return s2.back();
        }
        return c;
    }
};
