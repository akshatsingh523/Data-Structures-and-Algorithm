class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        vector<vector<int>> res;
        sort(items1.begin(),items1.end());
        sort(items2.begin(),items2.end());
        int i=0;
        int j=0;
        int n = items1.size();
        int m = items2.size();
        while(i<n && j<m){
            int id1=items1[i][0];
            int id2=items2[j][0];
            if(id1==id2){
                int sum=items1[i][1]+items2[j][1];
                res.push_back({id1,sum});
                i++;
                j++;
            }

            else if(id1<id2){
                res.push_back({id1,items1[i][1]});
                i++;
            }

            else if(id1>id2){
                res.push_back({id2,items2[j][1]});
                j++;
            }
        }

        while(i<n){
            int id1 = items1[i][0];
            res.push_back({id1,items1[i][1]});
            i++;
        }

        while(j<m){
            int id2 = items2[j][0];
            res.push_back({id2,items2[j][1]});
            j++;
        }
        return res;
       
    }
};
