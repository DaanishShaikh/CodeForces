#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
 
// using u128 = unsigned__int128;
// using i128 = __int128;
 
void solve() {
   int n,j,k;
   cin >> n >> j >> k;
   vector<int>a;
   while(n--){
    int x;
    cin >> x;
    a.push_back(x);
   }
   sort(a.begin(),a.end());
   for(int x : a){
    cout<<x<<' ';
   }
   cout<<'\n';
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