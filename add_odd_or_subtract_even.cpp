#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int a,b;
        cin >> a >> b;
        if(a<=b){
        if(abs(a-b)%2==1){
            cout<<1<<endl;
        } else if(abs(a-b)==0){
            cout<<0<<endl;
        } else {
            cout<<2<<endl;
        }
        }
        else {
            if(abs(a-b)%2==1){
            cout<<2<<endl;
            } else {
            cout<<1<<endl;
            }
        }
    }
    return 0;
}