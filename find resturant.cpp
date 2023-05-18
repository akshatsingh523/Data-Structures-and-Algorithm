class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string,int> mp,m;
        vector<string> v;
        int mini =INT_MAX;
        int mi;
        int sum;
        for(int i=0;i<list1.size();i++)
            m[list1[i]] = i;
        for(int j=0;j<list2.size();j++)
        {
            if(m.find(list2[j]) != m.end())
            {
                sum = j + m[list2[j]];
                if(sum<mini)
                {
                    v.clear();
                    mini = sum;
                    v.push_back(list2[j]);
                }
                else if( sum == mini)
                    v.push_back(list2[j]);
            }
        }
        return v;
    }
};
