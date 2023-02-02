class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        int x=mat.size();
        // int y=mat[0].size();
        vector<vector<int>> arr(x, vector<int>(x, 0));
        for(int i=0;i<x;i++){
            for(int j=0;j<x;j++){
                if(((i==j) || ((i+j)==(x-1))) && arr[i][j]==0){
                    sum+=mat[i][j];
                    arr[i][j]=1;
                }
            }
        }
        
        return sum;
    }
};
