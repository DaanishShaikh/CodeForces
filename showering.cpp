#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
 
// using u128 = unsigned__int128;
// using i128 = __int128;
 
void solve() {
   int n,s,m;
    cin >> n >> s >> m;
    int first=0;
    int ans=0,sum=0;
    for(int i=0;i<2*n;i++){
        int a;
        cin >> a;
        if(i%2==0){
          ans=max(ans,a-first);
        }
        first=a;
    }
    ans=max(ans,m-first);
    if(ans>=s) cout << "YES\n";
    else cout << "NO\n";
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