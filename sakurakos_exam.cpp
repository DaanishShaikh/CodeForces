#include <bits/stdc++.h>
using namespace std;

using i64 = long long;

void solve() {
    int n,m;
    cin >> n >> m;
    if(n%2)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            if(m%2==0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                if(n==0)
                {
                    cout<<"NO"<<endl;
                }
                else
                {
                    cout<<"YES"<<endl;
                }
            }
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

