class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int sum=0;
        int i=0;
        int z=additionalRocks;
        vector<int> left;
        for(int i=0;i<capacity.size();i++){
            left.push_back(capacity[i]-rocks[i]);
        }
        sort(left.begin(),left.end());

        for(auto x:left){
            if(z>=x){
                z-=x;
                i++;
            }
            else{
                break;
            }
        }

        return i;

        // vector<int> left;
        // int count=0;
        // int i=0;
        // int z=additionalRocks;
        // for(int i=0;i<capacity.size();i++){
        //     left.push_back(capacity[i]-rocks[i]);
        // }
        // sort(left.begin(),left.end());
        // for(auto x:left){
        //     cout<<x<<" ";
        // }
        // if(accumulate(left.begin(),left.end(),0)<additionalRocks){
        //     count=capacity.size();
        // }
        // else{
        //     for(int i=0;i<left.size();i++){
        //     if(left[i]==0){
        //         count++;
        //     }
        //     if(z<1 || z<left[i]){
        //         break;
        //     }
        //     if(z>left[i]){
        //         count++;
        //         z-=left[i];
        //     }
        // }
        // }
        // return count;
    }
};
