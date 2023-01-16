//bruteforce approach
#include <iostream>
using namespace std;

int max_sum(int a[],int n){
    int current_sum=0,maximum_sum=0;
    for(int i=0;i<n;i++){
        current_sum=current_sum+a[i];
        if(current_sum>maximum_sum)
        maximum_sum=current_sum;
        
        if(current_sum<0)
        current_sum=0;
        
    }
    cout<<maximum_sum;
    return 0;
}


int main(){
    int a[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    max_sum(a,n);
    
    return 0;
}
