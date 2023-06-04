class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int ans = 0;
        string s1m = arriveAlice.substr(0, 2);
        string s1d = arriveAlice.substr(3, 2);
        string s2m = leaveAlice.substr(0, 2);
        string s2d = leaveAlice.substr(3, 2);
        string s3m = arriveBob.substr(0, 2);
        string s3d = arriveBob.substr(3, 2);
        string s4m = leaveBob.substr(0, 2);
        string s4d = leaveBob.substr(3, 2);

        int a = stoi(s1m);
        int b = stoi(s1d);
        int c = stoi(s2m);
        int d = stoi(s2d);
        int e = stoi(s3m);
        int f = stoi(s3d);
        int g = stoi(s4m);
        int h = stoi(s4d);

        vector<int> v = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        int aa=0;
        int la=0;
        int ab=0;
        int lb=0;

        for(int i=0;i<a-1;i++){
            aa+=v[i];
        }
        aa+=b;

        for(int i=0;i<c-1;i++){
            la+=v[i];
        }
        la+=d;

        for(int i=0;i<e-1;i++){
            ab+=v[i];
        }
        ab+=f;

        for(int i=0;i<g-1;i++){
            lb+=v[i];
        }
        lb+=h;

        for(int i=aa;i<=la;i++){
            if(ab<=i && i<=lb){
                ans++;
            }
        }
        
        return ans;
    }
};

