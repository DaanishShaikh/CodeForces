#include <bits/stdc++.h>
using namespace std;

using i64 = long long;

i64 gcd(i64 a, i64 b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

i64 lcm(i64 a, i64 b) {
    return (a * b) / gcd(a, b);
}

i64 lcmOfGroup(const vector<i64>& numbers) {
    i64 result = 1;
    for (i64 num : numbers) {
        result = lcm(result, num);
    }
    return result;
}

void solve() {
    i64 n;
    cin >> n;
    vector<i64> v(n);

    for (i64 i = 0; i < n; i++) {
        cin >> v[i];
    }

    i64 FLCM = lcmOfGroup(v);
    i64 sum = 0;

    for (i64 i = 0; i < n; i++) {
        sum += FLCM / v[i];
    }

    if (sum >= FLCM) {
        cout << -1 << endl;
        return;
    }

    for (i64 i = 0; i < n; i++) {
        cout << FLCM / v[i] << ' ';
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    i64 tt;
    cin >> tt;

    while (tt--) {
        solve();
    }

    return 0;
}
