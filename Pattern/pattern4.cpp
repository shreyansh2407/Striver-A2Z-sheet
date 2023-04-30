#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=0;i<n;i++){
        int count=i+1;
        for(int j=0;j<=i;j++){
            cout<<count<<" ";
        }
        cout<<endl;
    }
    return 0;
}