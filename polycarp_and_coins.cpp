#include<bits/stdc++.h>
using namespace std;
using i64=long long;
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        i64 n;
        cin >> n;
        if(n%3==1){
            cout<<(n/3)+1<<' '<<n/3<<endl;
        } else if(n%3==2){
            cout<<n/3<<' '<<(n/3)+1<<endl;
        } else {
            cout<<n/3<<' '<<n/3<<endl;
        }
    }
    return 0;
}