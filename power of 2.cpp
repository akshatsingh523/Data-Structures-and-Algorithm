class Solution {
public:
    bool isPowerOfTwo(int n) {
        int flag=0;
        if(n<=0){
            return false;
        }
        if(n==1){
            return true;
        }
        while(n>1){
            if(n%2!=0){
                flag=1;
                break;
            }
            n=n/2;
        }
        if(flag==1){
            return false;
        }
        else{
            return true;
        }
    }
};
