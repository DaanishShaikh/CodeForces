#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    int x,y,k,m;
    cin >> x >> y >> k;
        while (k && x > 1) {
            m = min(k, y - (x % y));
            k -= m;
            x += m;
            while (!(x % y)) {
                x /= y;
            }
        }
        cout << x + k % (y - 1) << '\n';
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