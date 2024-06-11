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
    for(int i=0 ; i<n ; i++){
        if(ans<=0 && v[i]<=0){
            ans+=v[i];
        }
        else if(ans<=0 && v[i]>=0){
            ans=abs(ans);
            ans+=v[i];
        }
        else if(ans>=0 && v[i]>=0){
            ans+=v[i];
        }
        else if(ans>=0 && v[i]<=0){
            ans+=v[i];
            ans=abs(ans);
        }
    }
    ans=abs(ans);
    cout<<ans<<endl;
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