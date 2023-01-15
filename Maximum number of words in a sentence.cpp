class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int count=0;
        int k=0;
        vector<int> arr(sentences.size());
        for(int i=0;i<sentences.size();i++){
            for(int j=0;j<sentences[i].size();j++){
                if(isspace(sentences[i][j])){
                    count+=1;
                }
            }
            arr[k]=count+1;
            k++;
            count=0;
        }
        sort(arr.begin(),arr.end());
        int x=arr.size();
      return arr[x-1];  
    }
};
