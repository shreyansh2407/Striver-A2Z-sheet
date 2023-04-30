#include<iostream>
using namespace std;
bool sortedArray(int arr[],int n){
    int count=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            count++;
        }
    }
    if(count==0){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int arr[5]={90, 80, 100, 40, 30};
    int n=5;
    int a= sortedArray(arr,n);
    cout<<a;
    return 0;
}