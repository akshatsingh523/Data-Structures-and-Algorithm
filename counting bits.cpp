class Solution {
public:
    vector<int> countBits(int n) {
        int sum=0;
        vector<int> bin;
        bin.push_back(0);
        for(int i=1;i<n+1;i++){
            int k=i;
            while(k!=0){
                sum+=k%2;
                k=k/2;
            }
            bin.push_back(sum);
            sum=0;
        }
        return bin;
    }
};
