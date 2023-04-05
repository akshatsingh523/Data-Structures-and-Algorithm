class Solution {
public:
    int firstUniqChar(string s) {
        vector<char> ans;
        map<char,int> m;
        int i=0;

        for(auto x:s){
            m[x]=i;
            i++;
        }

        map<char,int> l;

        for(auto y:s){
            l[y]++;
        }
        for(auto z:l){
            if(z.second==1){
                ans.push_back(z.first);
            }
        }
        if(ans.size()==0){
            return -1;
        }

        int idx=100001;

        for(auto x:ans){
            char y=x;
            for(auto z:m){
                if(y==z.first){
                    if(idx>z.second)
                    idx=z.second;
                }
            }

        }

        return idx;
        
    }
};
