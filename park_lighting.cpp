#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    int n,m;
    cin >> n >> m;
    int ans=0;
    ans=n/2;
    ans*=m;
    if(n%2==0){
        cout<<ans<<endl;
    } else {
        if(m%2==0){
            ans+=m/2;
        cout<<ans<<endl;
        } else {
            ans+=(m/2)+1;
            cout<<ans<<endl;
        }
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