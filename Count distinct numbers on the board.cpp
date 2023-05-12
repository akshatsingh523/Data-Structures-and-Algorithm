class Solution {
public:
    int distinctIntegers(int n) {
        set<int> s;
        s.insert(n);
        while(n>1){
            for(int i=1;i<n;i++){
                if(n%i==1){
                    s.insert(i);
                }
            }
            n--;
        }
        return s.size();
    }
};
