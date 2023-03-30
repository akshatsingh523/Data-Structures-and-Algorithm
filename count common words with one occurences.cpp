class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        int count=0;

        vector<pair<string,int>> ans;
        vector<string> check;
        map<string,int> f1;
        map<string,int> f2;

        for(auto x:words1){
            f1[x]++;
        }

        for(auto y:words2){
            f2[y]++;
        }

        for (const auto& kv1 : f1) {
        auto it2 = f2.find(kv1.first);
        if (it2 != f2.end() && it2->second == 1 && kv1.second == it2->second) {
            count++;
        }
        }

        return count;
    }
};
