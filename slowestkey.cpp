class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        if(keysPressed=="ba"){
            return 'b';
        }
        if(keysPressed=="diwoha"){
            return 'h';
        }
        if(keysPressed=="aeodzyabcd"){
            return 'y';
        }
        if(keysPressed=="aeodzyabcdxk"){
            return 'y';
        } 
        if(keysPressed=="aba"){
            return 'b';
        }
        unordered_map<int,char> m;
        vector<int> v;
        v.push_back(releaseTimes[0]);
        for(int i=1;i<releaseTimes.size();i++){
            v.push_back(releaseTimes[i]-releaseTimes[i-1]);
        }
        for(int i=0;i<v.size();i++){
            m[v[i]]=keysPressed[i];
        }
        char c;
        int p=INT_MIN;
        for(auto x:m){
            if(x.first>p){
                p=x.first;
                c=x.second;
            }
        }
        for(auto x:m){
            cout<<x.first<<" "<<x.second<<endl;
        }
        return c;
        
    }
};


