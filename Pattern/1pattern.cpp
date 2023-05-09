#include<iostream>
using namespace std;
void printPattern1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main(){
    int n=4;
    printPattern1(n);
    return 0;
}