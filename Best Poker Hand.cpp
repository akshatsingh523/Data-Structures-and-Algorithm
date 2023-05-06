class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        int count1=0;
        int count2=0;
        map<int,int> m;
        map<int,int> n;

        for(auto x:ranks){
            m[x]++;
        }

        for(auto x:m){
            count1=max(x.second,count1);
        }

        for(auto y:suits){
            n[y]++;
        }

        for(auto x:n){
            count2=max(x.second,count2);
        }

        cout<<count1<<" "<<count2;

        if(count2==suits.size()){
            return "Flush";
        }
        else if(count1>=3){
            return "Three of a Kind";
        }
        else if(count1==2){
            return "Pair";
        }
        else{
            return "High Card";
        }

    }
};
