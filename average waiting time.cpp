class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        double t=0;
        double tt=0;
        double avg=0;
        t=customers[0][0];
        for(int i=0;i<customers.size();i++){
            tt=customers[i][1];
            if(t<customers[i][0]){
                t=customers[i][0];
            }
            t=tt+t;
            int x=t-customers[i][0];
            avg+=x;
            cout<<t<<" "<<tt<<" "<<avg<<endl;

        }
        cout<<avg<<" "<<customers.size();
        return avg/customers.size();
    }
};
