#include <bits/stdc++.h>
using namespace std;

using i64 = long long;

void solve() {
    int n,m;
    cin >> n >> m;
    if(n==0&&m==0){
    cout<<"YES"<<'\n';
    return;
    }
    if(n%2){
        cout<<"NO"<<'\n';
        return;
    }
        if(n==0&&m){
            if(m%2==0){
            cout<<"YES"<<'\n';
            return;
            } else {
            cout<<"NO"<<'\n';
            return;
            }
        }    
        if(n&&m==0){
            if(n%2==0){
            cout<<"YES"<<'\n';
            return;
            } else {
                cout<<"NO"<<'\n';
                return;
            }
        }
        // if(n&&m){
        //     if(m%2==0){
        //     cout<<"YES"<<'\n';
        //     return;
        //     } else {
        //         cout<<"NO"<<'\n';
        //         return;
        //     }
        // }
        if((2*m)-n){
            cout<<"NO"<<"blah blah"<<'\n';
            return;
        } else {
            cout<<"YES"<<'\n';
        }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;

    while (tt--) {
        solve();
    }

    return 0;
}
