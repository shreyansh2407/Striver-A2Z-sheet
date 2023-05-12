#include<bits/stdc++.h>
using namespace std;
bool palindrome(int n){
    int temp=n;
     int ans=0;
    while(n>0){
        int digit=n%10;
        ans= digit + (ans*10);
        n=n/10;
    }
    if(ans==temp){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int n=121;
    int ans = palindrome(n);
    if(ans){
        cout<<"true";
    }
    else{
        cout<<"False";
    }
    return 0;
}