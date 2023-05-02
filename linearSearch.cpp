#include<iostream>
using namespace std;
int linearSearch(int arr[],int n,int k){
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            return  1;
        }
    }
    return 0;
}
int main(){
    int arr[5]={1,2,3,4,78};
    int n=5;
    cout<<linearSearch(arr,n,7);
    return 0;
}