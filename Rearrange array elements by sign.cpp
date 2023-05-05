class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> p;
        vector<int> n;
        vector<int> ans;
        for(auto x: nums){
            if(x>=0){
                p.push_back(x);
            }
            else{
                n.push_back(x);
            }
        }
        int i=0;
        int j=0;
        while(i<p.size() && j<n.size()){
            ans.push_back(p[i]);
            ans.push_back(n[i]);
            i++;
            j++;
        }
        while(i<p.size()){
            ans.push_back(p[i]);
            i++;
        }
        while(j<p.size()){
            ans.push_back(n[j]);
            j++;
        }
        return ans;
    }
};
