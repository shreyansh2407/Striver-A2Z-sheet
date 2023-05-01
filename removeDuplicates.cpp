#include<iostream>
using namespace std;
int   removeDuplicate(int arr[],int n,int newArray[],int m){
        int i=0;
        int j=0;
        int count=0;
        newArray[0]=arr[0];
        while( i<n  && j<m ){
            if(arr[i+1]!=newArray[j]){
                newArray[j++]=arr[i++];
                count++;

            }
            else{
                i++;
            }
        }

    return count;
        
}
int main(){
    int arr[5]={1, 2, 2};
    int n=3;
    int newArray[5]={};
    int m=5;
    int c = removeDuplicate(arr,n,newArray,m);
            for(int i=0;i<c;i++){
        cout<<newArray[i]<<" ";
    }
    return 0;
}