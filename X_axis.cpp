#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    int x,y,z;
    cin >> x >> y >> z;
    int ans=1000;
    for(int i=0 ; i<=10 ; i++){
        ans=min(ans,abs(x-i)+abs(y-i)+abs(z-i));
    }
    cout<<ans<<'\n';
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