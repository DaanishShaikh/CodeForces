#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    int x,y;
    cin >> x >> y;
    int maxi=max(x,y);
    int mini=min(x,y);
    cout<<mini<<' '<<maxi<<endl;

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