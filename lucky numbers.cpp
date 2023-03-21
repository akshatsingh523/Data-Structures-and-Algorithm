class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> a1;
        vector<int> a2;
        vector<int> ans;
        int max=0;
        int min=100000;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j]<min){
                    min=matrix[i][j];
                }
            }
            a1.push_back(min);
            min=100000;
        }

        cout<<matrix.size()<<endl;
        cout<<matrix[0].size();

        for(int i=0;i<matrix[0].size();i++){
            for(int j=0;j<matrix.size();j++){
                if(matrix[j][i]>max){
                    max=matrix[j][i];
                }
            }
            a2.push_back(max);
            max=0;
        }

        for(int i=0;i<a1.size();i++){
            for(int j=0;j<a2.size();j++){
                if(a1[i]==a2[j]){
                    ans.push_back(a1[i]);
                }
            }
        }
        
        return ans;
    }
};
