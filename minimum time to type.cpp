class Solution {
public:
    int minTimeToType(string word) {
        int res=word.size(),prev='a';
        for(auto x:word){
            res+=min(abs(prev-x),26-abs(prev-x));
            prev=x;
        }        
        return res;
    }
};
