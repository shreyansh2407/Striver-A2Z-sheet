#include<iostream>
using namespace std;
int main(){
    int n=5;
    int arr[100]={2,6,5,1,11};
    
    int  target = 3;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
           
            //for finding answer
            
            if(arr[i]+arr[j]==target){
                    cout<<"Yes"<<endl;
                    
            }
        }
        
    }
   
    return 0;
}
