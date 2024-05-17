#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    i64 a,b,c,d;
    cin >> a >> b >> c >> d;
    if(c<=a+b){
        cout<<b<<' '<<c<<' '<<c<<endl;
    } else {
        cout<<b<<' '<<c<<' '<<c<<endl;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;

    while(tt--){
        solve();
    }

    return 0;
}