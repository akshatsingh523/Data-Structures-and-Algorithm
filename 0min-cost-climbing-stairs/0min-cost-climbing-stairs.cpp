class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> minimumcost(cost.size()+1,0);
        for(int i=2;i<minimumcost.size();i++){
            int takeonestep=minimumcost[i-1]+cost[i-1];
            int taketwostep=minimumcost[i-2]+cost[i-2];
            minimumcost[i]=min(takeonestep,taketwostep);
        }
        return minimumcost.back();
    }
};