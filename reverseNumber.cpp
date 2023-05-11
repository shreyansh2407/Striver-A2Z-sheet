#include<bits/stdc++.h>
using namespace std;
int reverseNumber(int n){
    int temp=n;
     int ans=0;
    while(n>0){
        int digit=n%10;
        ans= digit + (ans*10);
        n=n/10;
    }
    return ans;
}
int main(){
    int n=321;
    cout<<reverseNumber(n)<<endl;
    return 0;
}