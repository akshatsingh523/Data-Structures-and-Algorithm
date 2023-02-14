class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // int ans=0;
        // for(auto x:nums){
        //     ans^=x;
        // }
        // return ans;
};

class Solution {
public:
    int singleNumber(vector<int>& nums) { 
       unordered_map<int,int> a;
	   for(auto x: nums)
		   a[x]++;
	   for(auto z:a)
		   if(z.second==1)
			   return z.first;
	   return -1;
    }
};
