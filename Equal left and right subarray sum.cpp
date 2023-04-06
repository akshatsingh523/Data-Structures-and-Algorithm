class Solution {
  public:
    int equalSum(int N, vector<int> &A) {
        // code here
        int ls=0;
        int rs=0;
        for(auto x:A){
            rs+=x;
        }
        rs-=A[0];
        int i=0;
        int idx=-2;
        
        if(A.size()==1){
            idx=0;
        }
        
        while(i<A.size()){
            ls+=A[i];
            i++;
            rs-=A[i];
            if(ls==rs){
                idx=i;
                break;
            }
        }
        return idx+1;
     
    }
};
