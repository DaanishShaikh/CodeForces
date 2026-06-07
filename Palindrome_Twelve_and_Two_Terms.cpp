#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
 
// using u128 = unsigned__int128;
// using i128 = __int128;
 
void solve() {
    i64 n;
    cin >> n;
    if(n==10){
        cout<<-1<<'\n';
        return;
    }
    if((n%12>=0 && n%12<=9)||(n%12==11)){
        cout<<n%12<<' '<<n-(n%12)<<'\n';
        return;
    }
    if(n%12==10){
        cout<<22<<' '<<n-22<<'\n';
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