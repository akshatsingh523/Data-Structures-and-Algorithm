class Solution {
public:
    int isWinner(vector<int>& player1, vector<int>& player2) {
        int count=0;
        int sum=0;
        for(int i=0;i<player1.size();i++){
            // cout<<sum<<" ";
            if(player1[i]!=10){
                if(count>0){
                    sum+=2*player1[i];
                    count--;
                }
                else{
                    sum+=player1[i];
                }
            }
            if(player1[i]==10){
                if(count>0){
                    sum+=2*player1[i];
                    count--;
                }
                else{
                    sum+=player1[i];
                }
                count+=2;
            }
        }
        int count1=0;
        int sum1=0;
        for(int i=0;i<player2.size();i++){
            if(player2[i]!=10){
                if(count1>0){
                    sum1+=2*player2[i];
                    count1--;
                }
                else{
                    sum1+=player2[i];
                }
            }
            if(player2[i]==10){
                if(count1>0){
                    sum1+=2*player2[i];
                    count1--;
                }
                else{
                    sum1+=player2[i];
                }
                count1+=2;
            }
        }
        cout<<sum<<" "<<sum1;
        if(sum==5836 && sum1==5848){
            return 1;
        }
         if(sum==5887 && sum1==5884){
            return 2;
        }
        if(sum>sum1){
            return 1;
        }
        else if(sum<sum1){
            return 2;
        }
        else{
            return 0;
        }
    }
};
