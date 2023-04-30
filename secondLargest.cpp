#include<iostream>
using namespace std;
int largest(int arr[],int n)
{
    int largest=0;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    // cout<<"Largest number is:"<<largest<<endl;
    int second=0;
    int count=0;
for(int i=0;i<n;i++){
   if(arr[i]!=largest){
    if(arr[i]>second){
        second=arr[i];
        count++;
    }
   }
   
}
// if(count){
//         cout<<"Second largest number is:"<<second<<endl;
// }
// else{
//     cout<<"Second largest number is:"<<largest<<endl;
// }

if(count){
    return second;
}
else{
    return -1;
}

    
}


int main(){
    int arr[5]={6,6,6,6};
    int n=5;
   int a= largest(arr,n);
   cout<<a;
    return 0;

}