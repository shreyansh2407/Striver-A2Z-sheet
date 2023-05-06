#include<iostream>
using namespace std;
int sortArray(int  arr[],int n){
    int count1=0;
    int count2=0;
    int count0=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            count0++;
        }
        else if(arr[i]==1){
            count1++;
        } 
        else {
            count2++;
        }
    }
   
    for(int i=0;i<count0;i++){
        arr[i]=0;
    }
    for(int i=count0;i<count1+count0;i++){
        arr[i]=1;
    }
    for(int i=count1+count0;i<n;i++){
        arr[i]=2;
    }
    
    

    return 1;

}
int main(){
    int arr[100]={0,1,2,0,1,2,1,2,0,0,0,1};
    int n=12;
    sortArray(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}