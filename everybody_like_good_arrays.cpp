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
   for (int i = 0; i < n; i++) {
       cin >> a[i];
   }
   int ans=0, count=0;
   bool flag = false;
   for(int i = 0; i < n-1; i++) {
    if(a[i+1]%2==a[i]%2) {
        ans++;
    }
   }
   cout<<ans<<'\n';
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