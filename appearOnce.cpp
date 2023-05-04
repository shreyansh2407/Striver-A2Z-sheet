#include<iostream>
using namespace std;
int appearOnce(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans^=arr[i];
    }
    return ans;
}
int main(){
    int arr[5]={1,1,2,3,3};
    int n=5;
    cout<<appearOnce(arr,n);
    return 0;
}