#include<iostream>
using namespace std;

void largestNumber(int arr[],int n){
    int largest=0;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    cout<<largest<<endl;
}
int main(){
    int arr[5]={1,5,4,6,89};
    int n=5;
    largestNumber(arr,n);
    return 0;
}