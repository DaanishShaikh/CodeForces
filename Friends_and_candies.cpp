#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    int n;
    cin >> n;
    int sum=0;
    vector<int>v(n);
    for(int i=0 ; i<n ; i++){
        cin >> v[i];
        sum+=v[i];
    }
    if(sum%n!=0){
        cout<<-1<<'\n';
        return;
    }
    int ans=0;
    for(int i=0 ; i<n ; i++){
        if(v[i]>sum/n){
            ans++;
        }
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