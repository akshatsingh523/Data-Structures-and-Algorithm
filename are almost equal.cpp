class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        vector<char> v1;
        vector<char> v2;
        int flag=0;
        int count=0;
        int flag1=0;
        if(s1==s2){
            return true;
        }
        for(auto x:s1){
            v1.push_back(x);
        }

        for(auto x:s2){
            v2.push_back(x);
        }

        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());


        int i=0;
        int j=0;
        while(i<v1.size() && j<v2.size()){
            if(v1[i]!=v2[j]){
                flag=1;
                break;
            }
            i++;
            j++;
        }

        if(flag==1){
            return false;
        }
        else{
            i=0;
            j=0;

            while(i<s1.length() && j<s2.length()){
                if(s1[i]!=s2[j]){
                    count++;
                }
                i++;
                j++;
            }

        }
        
        if(count!=2){
            flag1=1;
        }

        if(flag1==1){
            return false;
        }
        else{
            return true;
        }
    }
};
