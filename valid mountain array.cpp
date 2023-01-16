class Solution {
public:
    bool validMountainArray(vector<int>& arr) 
    {
        int k;
        if(arr.size()<3)return false;
        if(arr[0]>arr[1])return false;
        int flag=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]<arr[i+1])
            {
                flag=1;
                continue;
            }
            if(arr[i]==arr[i+1])return false;
            else
            {
                k=i;
                break;
            }
        }
        int j;
        for( j=k;j<arr.size()-1;j++)
        {
             if(arr[j]>arr[j+1])
            {
                flag=0;
                continue;
            }
            else if(arr[j]<=arr[j+1])
            {
                return false;
            }
           
            
        }
        if(flag==1)return false;
        return true;
        
        
    }
};
