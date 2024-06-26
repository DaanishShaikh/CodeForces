#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    i64 n;
    cin >> n;
    vector<i64>v(n);
    for(int i=0 ; i<n ; i++){
        cin >> v[i];
    }
    i64 ans=0;
    i64 mn=0;
    for(int i=0 ; i<n ; i++){
        ans+=v[i];
        mn=min(mn,ans);
    }
    cout<<ans-(2*mn)<<endl;
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