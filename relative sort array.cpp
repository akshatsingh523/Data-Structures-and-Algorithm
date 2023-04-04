class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        set<int> set1;
        set<int> set2;
        vector<int> ans;
        vector<int> temp;
        int count=0;

        // for(int i=0;i<arr1.size();i++){
        //     for(int j=0;j<arr2.size();j++){
        //         if(arr1[i]!=arr2[j]){
        //             count++;
        //         }
        //         if(count==arr2.size()){
        //             temp.push_back(arr1[i]);
        //         }
        //         count=0;
        //     }
        // }

       for(int i=0; i<arr1.size(); i++){
         bool found = false;
            for(int j=0; j<arr2.size(); j++){
                if(arr1[i] == arr2[j]){
                    found = true;
                    break;
            }
        }
            if(!found){
                temp.push_back(arr1[i]);
            }
        }

        sort(temp.begin(),temp.end());


        // for (auto it = arr1.rbegin(); it != arr1.rend(); ++it) {
        //     if (result.find(*it) != result.end()) {
        //         arr1.erase(std::next(it).base());
        //     }
        // }

        for(int i=0;i<arr2.size();i++){
            for(int j=0;j<arr1.size();j++){
                if(arr2[i]==arr1[j]){
                    ans.push_back(arr2[i]);
                }
            }
        }

        for(auto x:temp){
            ans.push_back(x);
        }

        return ans;

    }
};
