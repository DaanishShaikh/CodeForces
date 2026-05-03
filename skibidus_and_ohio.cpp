#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
 
// using u128 = unsigned__int128;
// using i128 = __int128;
 
void solve() {
   string s;
   cin >> s;
   int index = -1;
   for(int i=1; i<s.size(); i++) {
       if(s[i] == s[i-1]) {
           index = i;
       }
   }
   if(index!=-1){
    cout << 1 << "\n";
   } else {
    cout << s.size() << "\n";
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