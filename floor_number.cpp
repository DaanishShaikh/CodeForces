#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n,m;
        cin >> n >> m;
        if(n<=2){
            cout<<1<<endl;
        } else {
            n-=2;
            if(n%m==0){
                cout<<1+(n/m)<<endl;
            } else {
                cout<<2+(n/m)<<endl;
            }
        }
    }
    return 0;
}