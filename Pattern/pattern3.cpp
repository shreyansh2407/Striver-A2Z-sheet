#include<iostream>
using namespace std;
int main(){
    int n=5;
    
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<=i;j++){
            count++;
            cout<<count<<" ";
        }
        cout<<endl;
    }
    return 0;
}