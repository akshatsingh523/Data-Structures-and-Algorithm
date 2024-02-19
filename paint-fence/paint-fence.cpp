class Solution {
private:
    int numways(int i,int k){
        if(i==1) return k;
        if(i==2) return k*k;
        return (k-1)*(numways(i-1,k)+numways(i-2,k));
    }
public:
    int numWays(int n, int k) {
        return numways(n,k);
    }
};