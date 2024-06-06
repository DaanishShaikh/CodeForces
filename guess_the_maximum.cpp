#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0 ; i<n ; i++){
        cin >> v[i];
    }
    int ans=INT_MAX;
    for(int i=1 ; i<n ; i++){
        ans=min(max(v[i-1],v[i]),ans);
    }
    cout<<--ans<<endl;
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