#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
 
// using u128 = unsigned__int128;
// using i128 = __int128;
 
void solve() {
   int n,m;
    cin >> n >> m;
    vector<int> arrayofnum(n);
    for (int i = 0; i < n; ++i) {
        cin >> arrayofnum[i];
    }
    vector<int> arrayofindices(m);
    for (int i = 0; i < m; ++i) {
        cin >> arrayofindices[i];
    }
    sort(arrayofnum.begin(), arrayofnum.end());
    vector<int> prefixsum(m);
    prefixsum[0] = arrayofnum[0];
    for (int i = 1; i < m; ++i) {
        prefixsum[i] = prefixsum[i - 1] + arrayofnum[i];
    }
    cout<< prefixsum[n-m] << '\n';
}
 
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int t;
    std::cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}