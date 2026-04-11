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
  string a,b;
  cin >> a >> b;
  vector <char> s;
  for(int i=0; i<n; i++) {
    s.push_back(a[i]);
  }
  vector <char> t;
  for(int i=0; i<n; i++) {
    t.push_back(b[i]);
  }
  sort(s.begin(),s.end());
  sort(t.begin(),t.end());
  if(s==t) {
    cout << "YES\n";
    return;
  } else {
    cout << "NO\n";
    return;
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