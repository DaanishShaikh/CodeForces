#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
 
// using u128 = unsigned__int128;
// using i128 = __int128;
 
void solve() {
   int m, a, b, c;
   std::cin >> m >> a >> b >> c;
   int l=m,r=m;
   int ans=0;
   if(l>=a){ 
    l-=a;
    ans+=a;
   }
   else {
    ans+=l;
    l=0;
   }
  if(r>=b){
    r-=b;
    ans+=b;
  }
  else {
    ans+=r;
    r=0;
  }
  ans+=min(l+r,c);
  cout<<ans<<"\n";
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