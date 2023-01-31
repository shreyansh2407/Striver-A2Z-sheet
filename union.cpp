#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
void removeDuplicate(int arr[],int k){
        int p = 0;
        int s=k;
        int count=0;
        while(s>0){
        for(int i = 1 ; i < k ; i++){
            if(arr[p] != arr[i]){
                arr[p+1] = arr[i];
                p++;
            }
            else{
                count++;
            }
        }
        s--;
        }
        for(int i=0;i<(k-count);i++){
            cout<<arr[i]<<" ";
   
}

}
void findUnion(int *arr1,int *arr2,int n,int m){
    int  arr[100];
    int p=0;
    
        for(int i=0;i<n;i++){
            arr[i]=arr1[i];
        }
        for(int i=0;i<m;i++){
            arr[n+i]=arr2[i];
        }
        for(int i=0;i<n+m-1;i++){
        int minIndex = i;
        for(int j=i+1;j<n+m;j++){
            if(arr[j]<arr[minIndex])
                minIndex = j;
        }
        swap(arr[minIndex],arr[i]);
        }
        removeDuplicate(arr,n+m);
 }


int main(){
    int arr1[5]={1,2,3,4,5};
    int arr2[3]={1,5,7};
    int n=5;
    int m=3;
    int k=n+m;
    findUnion(arr1,arr2,n,m);

    return 0;
}