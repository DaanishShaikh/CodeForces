#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n>1){
    for(int i=0 ; i<n ; i++){
        if(i==0){
            cout<<"i hate that ";
        } 
        else if(i%2&&i!=n-1){
            cout<<"i love that ";
        } 
        else if((i%2==0)&&(i!=n-1)){
            cout<<"i hate that ";
        } else if(i%2&&i==n-1){
            cout<<"i love it ";
        } else if(i%2==0&&i==n-1){
            cout<<"i hate it ";
        }
    }
    } else {
        cout<<"i hate it";
    }
    return 0;
}