#include<iostream>
using namespace std;
int missingNumber(int arr[],int n){
    int sum=0;
    int sumArray=0;
        for(int i=1;i<=n;i++){
                sum+=i;
        }

        for(int i=0;i<n;i++){
            sumArray+=arr[i];
        }

        if(sum==sumArray){
            return 0;
        }
        else{
            return -(sum-sumArray);
        }
        
}

int missingNum(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]!=(i+1)){
            return i+1;
        }
    }
    return 0;
}
int main(){
   int arr[5]={1,2,3,4,5};
   int n=5;
   int b = missingNum(arr,n);
   cout<<b<<" "; 

    
    return 0;
}