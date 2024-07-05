#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){

    int n, m;
        cin >> n >> m;
        string s;
        cin >> s;

        set<int> indices;
        for (int i = 0; i < m; ++i) {
            int x;
            cin >> x;
            indices.insert(--x);
        }

        string c;
        cin >> c;
        sort(c.begin(), c.end());

        int ptr = 0;
        for (auto idx : indices) {
            s[idx] = c[ptr++];
        }

        cout << s << '\n';

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