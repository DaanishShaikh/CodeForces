#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    int a,b,c,x,y;
    cin >> a >> b >> c >> x >> y;
    if(c>=x+y){
        cout<<"YES"<<'\n';
        return;
    }
    if(x<=a && y<=b){
        cout<<"YES"<<'\n';
        return;
    }
    if(max(0,x-a)+max(0,y-b)<=c){
        cout<<"YES"<<'\n';
    } else {
        cout<<"NO"<<'\n';
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