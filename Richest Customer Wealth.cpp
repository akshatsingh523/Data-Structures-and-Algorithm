class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sum=0;
        int k=0;
        vector<int> arr(accounts.size());
        
        for(int i=0;i<accounts.size();i++){
            for(int j=0;j<accounts[i].size();j++){
                sum+=accounts[i][j];
            }
            arr[k]=sum;
            k++;
            sum=0;
        }
        sort(arr.begin(),arr.end());

        int y=arr.size();
        int z=arr[y-1];
        return z;
    }
};
