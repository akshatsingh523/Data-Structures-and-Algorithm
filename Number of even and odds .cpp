class Solution {
public:
    vector<int> evenOddBit(int n) {
        vector<int> bin;
        vector<int> res;
        while(n>0){
            bin.push_back(n%2);
            n=n/2;
        }
        int e=0;
        int o=0;
        for(int i=0;i<bin.size();i++){
            if(bin[i]==1){
                if(i%2==0){
                    e++;
                }
                else{
                    o++;
                }
            }
        }
        res.push_back(e);
        res.push_back(o);
        return res;
    }
};
