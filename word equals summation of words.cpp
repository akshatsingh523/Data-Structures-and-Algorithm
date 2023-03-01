class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        int j=0;
        int k=0;
        int m=0;
        int x=0;
        int y=0;
        int z=0;
        int numf=0;
        int nums=0;
        int numt=0;

        for(int i=firstWord.length()-1;i>=0;i--){
            x=firstWord[i]-'a';
            numf+=x*pow(10,j);
            j++;
        }
        for(int l=secondWord.length()-1;l>=0;l--){
            y=secondWord[l]-'a';
            nums+=y*pow(10,k);
            k++;
        }

        for(int g=targetWord.length()-1, k=0; g>=0; g--, k++){
            z=targetWord[g]-'a';
            numt+=z*pow(10,k);
        }

        cout<<numt;
        if((nums+numf)==numt){
            return true;
        }
        else
        return false;
    }
};
