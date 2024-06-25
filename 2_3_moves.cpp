#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    int n;
    cin >> n;
    if(n==2||n==3){
        cout<<1<<'\n';
        return;
    }
    if(n==1){
        cout<<2<<'\n';
        return;
    }
    cout<<(n+2)/3<<'\n';
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