#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
 
// using u128 = unsigned__int128;
// using i128 = __int128;
 
void solve() {
   int n, k, p;
   cin >> n >> k >> p;
   if(k==0) {
       cout << 0 << "\n";
       return;
   }
   if(k<=n*abs(p) && (k>=-(n*abs(p)))) {
       if(abs(k)>=abs(p) && k%p==0) {
            cout << abs(k)/abs(p) << "\n";
        } else if(abs(k)>=abs(p) && k%p) {
            cout << abs(k)/abs(p)+1 << "\n";
        } else {
            cout<<1<<"\n";
       }
   } else {
       cout << -1 << "\n";
   }

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