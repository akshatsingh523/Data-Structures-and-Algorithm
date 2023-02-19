class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        map<int,int>harsh;
        int single=0;
        int doubl=0;
        for(int i=0;i<nums.size();i++)
        {
            harsh[nums[i]]++;
        }
        for(auto it=harsh.begin();it != harsh.end();it++)
        {
            if(it->second>=2)
            {
                doubl+=it->second/2;
                single+=it->second%2;
            }
            else if(it->second==1)
            {
                single++;
            }
        }
        return {doubl,single};
    }
};
