#include<iostream>
using namespace std;
int appearOnce(int arr[],int n){
    int ans=0;
    for(int i=00;i<n;i++){
        ans^=arr[i];
    }
    return ans;
}
int main(){
    int arr[5]={1,1,4,5,5};
    int n=5;
    int ans = appearOnce(arr,n);
    cout<<ans;
    return 0;

}