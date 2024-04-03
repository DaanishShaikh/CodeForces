#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int a,b;
        cin>>a>>b;
        if(a%b!=0){
            cout<<'1'<<endl;
            cout<<a<<endl;
        }  
    }
    return 0;
}