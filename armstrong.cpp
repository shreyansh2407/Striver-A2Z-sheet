#include<bits/stdc++.h>
using namespace std;

bool armstrong(int n){
    int ans=0;
    int temp=n;
    while(n>0){
        int digit=n%10;
        ans = ans + pow(digit,3);
        n= n/10;

    }
    if(ans==temp){
        return true;
    }
    else{
        return false;
    }
}
int  main(){
    int n=371;
    cout<<armstrong(n);
    return 0;
}