#include<iostream>
using namespace std;
int majorityElement(int arr[],int n){
        for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>n/2){
            return arr[i];
        }
    }
    return -1;
}
int main(){
    int arr[]={1,2,3};
    int n=3;
    int majority= majorityElement(arr,n);
    cout<<majority;
    
    return 0;
}