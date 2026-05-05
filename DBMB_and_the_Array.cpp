#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
 
// using u128 = unsigned__int128;
// using i128 = __int128;
 
void solve() {
   int n,s,x;
   cin >> n >> s >> x;
   int sum=0;
   vector<int> a(n);
   for (int i = 0; i < n; i++) {
       cin >> a[i];
       sum += a[i];
   }
   if(sum>s) {
       cout << "NO\n";
       return;
   }
    if(sum==s) {
        cout << "YES\n";
        return;
    }
    if((s-sum)%x==0) {
        cout << "YES\n";
        return;
    }
    cout << "NO\n";
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