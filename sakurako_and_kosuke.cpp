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
    int count=0;
    int dot=0;
    for(int i = 1; i <= n; i++) {
      count++;
      if(i%2){
        dot-=abs(((2*i)-1));
      } else{
        dot+=abs(((2*i)-1));
      }
      //cout<<dot<<" ";
    }
    if(count%2){
      cout<<"Kosuke"<<endl;
    } else {
      cout<<"Sakurako"<<endl;
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