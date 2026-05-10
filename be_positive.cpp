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
    int minusones = 0;
    int ans=0;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] == 0) {
            ans++;
        }
        if (a[i] == -1) {
            minusones++;
        }
    }
    if (minusones%2) {
        ans+=2;
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
    
    return 0;
}