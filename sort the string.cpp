// class Solution {
// public:
//     string sortSentence(string s) {
//         string f="";
//         map<int,string> m;
//         string ans;
//         for(int i=0;i<=s.length();i++){
//             if(s[i]==' '){
//                 m[f[f.length()-1]-'0']=f;
//                 f="";
//             }
//             else if(i==s.length()){
//                 m[f[f.length()-1]-'0']=f;
//             }
//             char c=s[i];
//             f+=c;
//         }
//         int i=1;
//         for(auto x : m) {
//             x.second.pop_back();
//             ans+=x.second;
//             if(i==m.size()-1){
//                 continue;
//             }
//             else{
//                 ans+=" ";
//             }
//             i++;
//         }
//         return ans;
//     }
// };

class Solution {
public:
    string sortSentence(string s) {
        string f = "";
        map<int, string> m;
        string ans;
        for (int i = 0; i <= s.length(); i++) {
            if (s[i] == ' ' || i == s.length()) {
                m[f.back() - '0'] = f;
                f = "";
            } else {
                char c = s[i];
                f += c;
            }
        }
        int i = 1;
        for (auto& x : m) {
            x.second.pop_back();
            ans += x.second;
            if (i != m.size()) {
                ans += " ";
            }
            i++;
        }
        return ans;
    }
};
