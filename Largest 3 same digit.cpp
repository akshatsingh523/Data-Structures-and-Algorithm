class Solution {
public:
    string largestGoodInteger(string num) {
        int i=0;
        int j=i+1;
        int k=j+1;
        string res="";
        int c=0;
        int m=0;
        char y;
        int flag=0;
        while(k<num.length()){
            if(num[i]==num[j] && num[j]==num[k] && num[k]==num[i]){
                flag=1;
                c=num[i]-'0';
                m=max(m,c);
                if(c>=m)
                y=num[i];
            }
            i++;
            j++;
            k++;
        }
        if(flag==1){
            for(int o=0;o<3;o++){
                res+=y;
            }
        }
        return res;
    }
};
