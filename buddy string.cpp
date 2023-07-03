class Solution {
public:
    bool buddyStrings(string s, string goal) {
        unordered_map<char,int> m1;
        unordered_map<char,int> m2;

        int count=0;

        for(auto x:s){
            m1[x]++;
        }
        for(auto x:goal){
            m2[x]++;
        }

        int i=0;
        int j=0;

        vector<int> v1;

        while(i<s.length() && j<goal.length()){
            if(s[i]!=goal[j]){
                count++;
                v1.push_back(i);
            }
            i++;
            j++;
        }

        if(count==0){
            if(m1.size()==s.length()){
                return false;
            }
            return true;
        }
        if(count==2){
            swap(s[v1[0]],s[v1[1]]);
            if(s==goal){
                return true;
            }
            else{
                return false; 
            }
        }
        else{
            return false;
        }
    }
};
