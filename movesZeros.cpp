#include<iostream>
using namespace std;
void moveZeros(int arr[],int n,int a[],int m){
    int i=0;
    int j=0;
    int count=0;
    while(i<n){
        if(arr[i]!=0){
            a[j++]=arr[i++];
            count++;
            
        }
        else{
            i++;
            
        }
    }
    for(int i=count;i<m;i++){
        a[i]=0;
    }

}
int main(){
    int arr[7]={1,2,0,4,5,6,7};
    int n=7;
    int a[7]={};
    int m=7;
    moveZeros(arr,n,a,m);
    for(int i=0;i<m;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}