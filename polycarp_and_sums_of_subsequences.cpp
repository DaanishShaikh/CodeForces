#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    int a,b,c,d,e,f,g;
    cin >> a >> b >> c >> d >> e >> f >> g;
    cout<<a<<' '<<b<<' '<<g-(a+b)<<'\n';

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