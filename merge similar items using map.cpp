class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        vector<vector<int>> res;
        map<int,int> m;
        for(auto item : items1){
            m[item[0]]+=item[1];
        }

        for(auto item : items2){
            m[item[0]]+=item[1];
        }

        for(auto item : m){
            res.push_back({item.first,item.second});
        }
        return res;
       
    }
};
