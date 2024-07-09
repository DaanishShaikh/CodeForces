#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    int n;
    cin >> n;
    if(n%2==0){
        cout<<2<<' '<<n<<'\n';
    } else {
        cout<<2<<' '<<n-1<<'\n';
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