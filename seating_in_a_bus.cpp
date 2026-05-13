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
    vector<int>a(n);
    for(int i=0 ; i<n; i++) {
        cin >> a[i];
    }
    vector<bool>seats(n+1, false);
    if(a[0]>0){
      seats[a[0]-1] = true;
    }
    if(a[0]<n){
      seats[a[0]+1] = true;
    }
    for(int i=1; i<n; i++) {
        if(!seats[a[i]]){
          cout << "NO\n";
          //cout<<"i: "<<i<<" a[i]: "<<a[i]<<'\n';
          return;
        }
        seats[a[i]] = true;
        if(a[i]<n){
          seats[a[i]+1] = true;
        }
        if(a[i]>0){
          seats[a[i]-1] = true;
        }
    }
    // for(int i=0; i<=n; i++) {
    //     cout<<seats[i]<<" ";
    // }
    cout << "YES\n";
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