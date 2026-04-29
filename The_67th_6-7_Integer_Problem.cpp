#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
 
// using u128 = unsigned__int128;
// using i128 = __int128;
 
void solve() {
   vector<int> a(7);
   for (int i = 0; i < 7; i++) {
       cin >> a[i];
   }
   sort(a.begin(), a.end());
   int sum=0;
   for(int i = 0; i < 6; i++) {
       sum+=-a[i];
   }
   cout << sum+a[6] << '\n';
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