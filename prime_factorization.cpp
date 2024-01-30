#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int temp = n;
    if(n==1){
        cout<<"1";
    }
    for(int i=2; i<=temp; i++){
        if(n % i == 0){
            cout<<i;
            n = n / i;
            
            break;
            }
            }
    for(int j=0 ; j<=temp ; j++){
    for(int i=2; i<=temp; i++){
        if(n % i == 0){
            cout<<"*"<<i;
            n = n / i;
            
            break;
            }
            }
    
    
    }
    return 0;
}