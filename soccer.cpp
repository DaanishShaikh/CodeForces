#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    if((a>b)&&(d>c) || (a<b)&&(d<c)){
        cout<<"NO"<<'\n';
        return;
    }
    if(a==c&&b==d){
        cout<<"YES"<<'\n';
        return;
    }
    cout<<"YES"<<'\n';
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