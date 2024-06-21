#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    i64 a,b,c;
    cin >> a >> b >> c;
    i64 n=2*abs(a-b);
    if(a>n||b>n||c>n){
        cout<<-1<<'\n';
        return;
    }
    i64 d=(n/2) +c;
    while(d>n){
        d-=n;
    }
            cout<<d<<'\n';

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