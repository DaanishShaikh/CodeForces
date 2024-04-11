#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n>1){
    for(int i=0 ; i<n ; i++){
        if(i==0){
            cout<<"I hate that ";
        } 
        else if(i%2&&i!=n-1){
            cout<<"I love that ";
        } 
        else if((i%2==0)&&(i!=n-1)){
            cout<<"I hate that ";
        } else if(i%2&&i==n-1){
            cout<<"I love it ";
        } else if(i%2==0&&i==n-1){
            cout<<"I hate it ";
        }
    }
    } else {
        cout<<"I hate it";
    }
    return 0;
}