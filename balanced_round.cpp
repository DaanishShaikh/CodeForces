#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

void solve() {
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int count = 1,maxcount = 1;
    sort(a.begin(), a.end());
    for(int i = 1; i < n; i++) {
        if((a[i]-a[i-1])<=k) {
            count++;
            maxcount = max(maxcount, count);
        } else {
            count = 1;
        }
    }
    cout<<n-maxcount<<'\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}