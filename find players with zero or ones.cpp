class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<int> winners;
        vector<int> losers;
        set<int> ans1;
        set<int> ans2;
        for(int i=0;i<matches.size();i++){
            for(int j=0;j<matches[i].size();j++){
                if(j%2==0)
                    winners.push_back(matches[i][j]);
                else
                    losers.push_back(matches[i][j]);    
            }
        }
        int count=0;
        for(int i=0;i<losers.size();i++){
            for(int j=0;j<losers.size();j++){
                if(losers[i]==losers[j])
                    count++;
            }
            if(count==1)
                ans1.insert(losers[i]);
            count=0;
        }
        count=0;
        for(int i=0;i<winners.size();i++){
            for(int j=0;j<losers.size();j++){
               if(winners[i]==losers[j])
                   count++;
            }
            if(count==0)
                ans2.insert(winners[i]);
            count=0;
        }

        vector<vector<int>> ans;
        vector<int> ans1_vec(ans1.begin(), ans1.end());
        vector<int> ans2_vec(ans2.begin(), ans2.end());
        ans.push_back(ans2_vec);
        ans.push_back(ans1_vec);
        return ans;

    }
};
