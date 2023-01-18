class Solution {
public:
    int countDigits(int num) {
        vector<int> arr;
        int x=num;
        int count=0;
        while(num>0){
            arr.push_back(num%10);
            num=num/10;
        }
        for(int i=0;i<arr.size();i++){
            if(x%arr[i]==0){
                count+=1;
            }
        }
        return count;
    }
};
