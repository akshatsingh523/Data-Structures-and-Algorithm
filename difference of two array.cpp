class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> ans;
        vector<int> ar1;
        vector<int> ar2;
        set<int> n1;
        set<int> n2;
        for(auto x:nums1){
            n1.insert(x);
        }
        for(auto x:nums2){
            n2.insert(x);
        }
        for(auto x:n1){
            for(auto y:n2){
                if(x==y){
                    n1.erase(x);
                    n2.erase(y);
                }
            }
        }

        for(auto x:n1){
            for(auto y:n2){
                if(x==y){
                    n1.erase(x);
                    n2.erase(y);
                }
            }
        }

        for(auto x:n1){
            ar1.push_back(x);
        }
        for(auto y:n2){
            ar2.push_back(y);
        }

        ans.push_back(ar1);
        ans.push_back(ar2);


        return ans;
    }
};
