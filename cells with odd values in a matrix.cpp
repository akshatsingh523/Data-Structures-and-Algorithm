class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        int count=0;
        int l=0;
        vector<vector<int>> ans(m,vector<int>(n,0));
        for(int i=0;i<indices.size();i++){
            for(int j=0;j<indices[i].size();j++){
                if(l%2==0){
                    for(int k=0;k<n;k++){
                        ans[indices[i][j]][k]++;
                    }
                }
                else{
                    for(int k=0;k<m;k++){
                        ans[k][indices[i][j]]++;
                    }
                }
                l++;
            }
        }
        for(int i=0;i<ans.size();i++){
            for(int j=0;j<ans[i].size();j++){
                if(ans[i][j]%2!=0){
                    count++;
                }
            }
        }
        
        return count;
    }
};
