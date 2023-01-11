class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> arr;
        int x=m+n;
//         int j=0;
//         for(int i=m;i<x;i++){
//             nums1[i]=nums2[j];
//             j++;
//         }
//         sort(nums1.begin(),nums1.end());
        
//         for(int i=0;i<x;i++){
//             cout<<nums1[i];
//         }
        int a=0,b=0;
        int i=0;
        while(a<m && b<n){
            if(nums1[a]>nums2[b]){
                arr.push_back(nums2[b]);
                b++;
            }
            else{
                arr.push_back(nums1[a]);
                a++;
            }   
        }
        if(a<m){
            for(int i=a;i<m;i++){
                arr.push_back(nums1[i]);
            }
        }
        else{
             for(int i=b;i<n;i++){
                arr.push_back(nums2[i]);
            }
        }
        nums1=arr;
        for(int i=0;i<x;i++){
            cout<<arr[i];
        }
        
    }
};
