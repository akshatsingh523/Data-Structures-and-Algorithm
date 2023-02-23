class Solution {
public:
    char repeatedCharacter(string s) {
        char c;
        set<char> v;
        for(auto x:s){
            if(v.find(x)==v.end()){
                v.insert(x);
            }
            else if(v.find(x)!=v.end()){
                c=x;
                break;
            }
        }
        
        return c;
    }
};
