class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        // int flag=0;
        // for(int i=0;i<target.size();i++){
        //     for(int j=0;j<arr.size();j++){
        //         if(target[i]==arr[i]){
        //             count++;
        //         }
        //         if(count!=1){
        //             flag=1;
        //             return false;
        //         }
        //     }
        // }
        int count=0;
        sort(arr.begin(),arr.end());
        sort(target.begin(),target.end());
        for(int i=0;i<arr.size();i++){
            if(arr[i]==target[i]){
                count++;
            }
        }
        if(count==target.size()){
            return true;
        }
        else return false;
        
    }
};
