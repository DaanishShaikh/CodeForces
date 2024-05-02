#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    int a,b,c;
    cin >> a >> b >> c;
    int atime=abs(a-1);
    int btime=abs(b-c)+abs(c-1);
    if(atime>btime){
        cout<<2<<endl;
    } else if(atime<btime){
        cout<<1<<endl;
    } else {
        cout<<3<<endl;
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