#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
 
// using u128 = unsigned__int128;
// using i128 = __int128;
 
void solve() {
    int n, k;
    cin >> n >> k;
    int ans=n;
    while (n/k) {
        ans += n / k;
        n=n/k + n%k;
    }
    cout << ans << "\n";
}
 
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int t;
    std::cin >> t;
    
    while (t--) {
       solve();
    }
    solve();
    
    return 0;
}