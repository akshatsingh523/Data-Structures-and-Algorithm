class Solution {
public:
    int largestInteger(int num) {
        vector<int> arr;
        while(num>0){
            arr.push_back(num%10);
            num=num/10;
        }
        reverse(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                if(arr[i]%2==0){
                    if(arr[j]%2==0 && arr[j]>arr[i]){
                        swap(arr[i],arr[j]);
                    }
                }
                else{
                    if(arr[j]%2!=0 && arr[j]>arr[i]){
                        swap(arr[i],arr[j]);
                    }
                }
            }
            
        }
        int i=arr.size()-1;
        int nums=0;
        for(auto x:arr){
            nums+=x*pow(10,i);
            i--;
        }
        return nums;
    }
};
