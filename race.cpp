#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
 
// using u128 = unsigned__int128;
// using i128 = __int128;
 
void solve() {
    int a, x, y;
    cin >> a >> x >> y;
    if(a==x||a==y){
        cout<<"NO\n";
        return;
    } else if((x<a&&a<y)||(y<a&&a<x)){
        cout<<"NO\n";
        return;
    } else {
        cout<<"YES\n";
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