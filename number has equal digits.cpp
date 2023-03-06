class Solution {
public:
    bool digitCount(string num) {
        vector<int> arr;
        vector<int> c;
        int flag=0;
        int z=num.length();
        map<int,int> ans;
        long long n=stoll(num);


        while(z!=0){
            arr.push_back(n%10);
            n=n/10;
            z--;
        }

        reverse(arr.begin(),arr.end());

        for(int i=0;i<arr.size();i++){
            ans[arr[i]]++;
        } 


        for(int i=0;i<num.length();i++){
            int freq_i=ans[i];
            if(freq_i!=num[i]-'0'){
                return false;
            }
        }
        return true;

        // for(auto x:ans){
        //     c.push_back(x.second);
        // }


        // if(arr.size()==1 && arr[0]!=0){
        //     flag=1;
        // }

        // if(arr.size()!=ans.size()){
        //     flag=1;
        // }

        // if(flag==1)return false;
        // return true;
    }
};
