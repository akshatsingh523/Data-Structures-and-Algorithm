class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string s=to_string(num);
        int count=0;
        for(int i=0;i<s.length()-(k-1);i++){
            string str=" ";
            for(int j=0;j<k;j++){
                str=str+s[i+j];
            }
            int x=stoi(str);
            if(x==0){
                
            }
            else if(num%x==0){
                count++;
            }
        }
        return count;   
    }
};
