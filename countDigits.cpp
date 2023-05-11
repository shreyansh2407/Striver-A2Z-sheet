#include<bits/stdc++.h>
using namespace std;
int countDigits(int n){
        int count=0;
        while(n>0){
            count++;
            n=n/10;
        }
        return count;
}


int main(){
   
    int n=56432;
    cout<<countDigits(n);
    cout<<endl;
    int cnt = log10(n)+1;
    cout<<cnt<<endl;
    return 0;
}