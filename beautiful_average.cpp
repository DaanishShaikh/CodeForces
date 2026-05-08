#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
 
// using u128 = unsigned__int128;
// using i128 = __int128;
 
void solve() {
   int n;
   cin >> n;
    vector<int> a(n);
    int maxnum=0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        maxnum = max(maxnum, a[i]);
    }
    cout<< maxnum << "\n";
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