#include<bits/stdc++.h>
using namespace std;
bool primeCheck(int n){
    int count=0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==0){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int ans  = primeCheck(32);
    cout<<ans;
    return 0;
}