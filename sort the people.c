class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int x=heights.size();
        vector<int> arr(x);
        vector<string> height(x);
        for(int i=0;i<heights.size();i++){
            arr[i]=heights[i];
        }
        sort(arr.begin(),arr.end());
        vector<int> idx(x);
        int k=0;
        for(int i=0;i<x;i++){
            for(int j=0;j<x;j++){
                if(arr[i]==heights[j]){
                    idx[k]=j;
                    k++;
                }
            }
        }
        for(int i=0;i<names.size();i++){
            height[i]=names[idx[i]];
        }    
        reverse(height.begin(),height.end());

        return height;
    }
};
