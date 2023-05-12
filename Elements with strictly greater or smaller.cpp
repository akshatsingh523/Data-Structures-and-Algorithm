class Solution {
public:
    int countElements(vector<int>& nums) {
        map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        int sum=0;
        int b=INT_MAX;
        int c=INT_MIN;

        for(auto x:nums){
            b=min(b,x);
        }
        for(auto x:nums){
            c=max(c,x);
        }
        cout<<b<<" "<<c;
        for(auto x:m){
            if(b!=x.first && c!=x.first){
                sum+=x.second;
            }
        }
        return sum;
    }
};
