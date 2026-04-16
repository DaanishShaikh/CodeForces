#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
 
// using u128 = unsigned__int128;
// using i128 = __int128;
 
void solve() {
   i64 n,k,x;
   cin >> n >> k >> x;
   i64 min_sum=(k)*(1+k);
   min_sum/=2;
   i64 max_sum=(k)*((2*(n))-k+1);
   max_sum/=2;
   
//    for(i64 i=1, j=n;k;i++,j--,k--){
//         min_sum+=i;
//         max_sum+=j;
//    }
    // cout<<"min sum:"<< min_sum << endl;
    // cout<<"max sum:"<< max_sum << endl;
    if(min_sum<=x && x<=max_sum){
          cout << "YES" <<'\n';
          return;
    }
    cout << "NO" << '\n';
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