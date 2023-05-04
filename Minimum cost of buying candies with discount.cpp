class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end(),greater<int>());
        int cst=accumulate(cost.begin(),cost.end(),0);
        int i=0;
        int j=1;
        int k=2;
        while(k<cost.size()){
            if(min(cost[i],cost[j])>=cost[k]){
                cst-=cost[k];
                i+=3;
                j+=3;
                k+=3;
            }
            else{
                i+=1;
                j+=1;
                k+=1;
            }
        }
        return cst;
    }
};
