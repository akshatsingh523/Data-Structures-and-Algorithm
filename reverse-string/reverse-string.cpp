class Solution {
public:
    void reverseString(vector<char>& s) {
        reverse(s.begin(),s.end());
        for(auto x:s){
            cout<<x;
        }
    }
};

