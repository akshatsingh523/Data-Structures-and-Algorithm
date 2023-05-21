class Solution {
public:
    int mySqrt(int x) {
        double ans=0;
        double i;
        if(x==0){
            return 0;
        }
        for(i=1;i<x;i++){
            if(i*i==x){
                ans=i;
                break;
            }
            else if(i*i<x && (i+1)*(i+1)>x){
                ans=i;
                break;
            }
            else{
                continue;
            }
        }

        return i;
        
    }
};
