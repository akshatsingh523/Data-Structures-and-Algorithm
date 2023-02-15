class Solution {
public:
    static bool comp(pair<int,int> p,pair<int,int> q){
        if(p.first!=q.first){
            if(p.first>q.first){
                return false;
            }
            return true;
        }
        else{
            if(p.second>q.second){
                return false;
            }
            return true;
        }

    }
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int count=0;
        vector<int> ones;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==1){
                    count++;
                }
            }
            ones.push_back(count);
            count=0;
        }

        vector<pair<int,int>> p;
        for(int i=0;i<ones.size();i++){
            p.push_back({ones[i],i});
        }

        sort(p.begin(),p.end());
        // 1,2
        // 2,0
        // 2,3
        // 4,1
        // 5,4
        sort(p.begin(), p.end(), comp);

        vector<int> ans;
        for(int i=0;i<k;i++){
            ans.push_back(p[i].second);
        }
        return ans;

    }
    // {{3,0},{2,1}}=>{{2,1},{3,0}}
    
};
