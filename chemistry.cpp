#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
 
// using u128 = unsigned__int128;
// using i128 = __int128;
 
void solve() {
   int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    map<char,int> mp;
    for(int i=0;i<n;i++){
        mp[s[i]]++;
    }
    int odd = 0;
    for(auto it:mp){
      if(it.second%2!=0){
        odd++;
      }
    }
    //cout<<"odd: "<<odd<<"\n";
    if(odd==1 || odd==0){
      cout<<"YES\n";
      return;
    } 
    if(odd<=k){
      cout<<"YES\n";
      return;
    }
    if(odd-k<=1){
      cout<<"YES\n";
      return;
    }
    cout<<"NO\n";
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