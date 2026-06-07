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
 int ans=0;
 for(int i=0; i<s.size(); i++){
  if(s[i] == '4'){
   ans++;
  }
 }
 int tempcountback = 0;
 int tempcountfront = 0;
 int frontend = -1;
 int backend = -1;
 for(int i=s.size()-1; i>=0; i--){
  if(s[i] == '2'){
    backend = i-1;
   break;
  }
 }
 for(int i=backend;i>=0;i--){
  if((s[i] == '1' || s[i] == '3')&& backend != -1){
   tempcountback++;
  }
 }
 for(int i=0;i<s.size();i++){
  if(s[i] == '1' || s[i] == '3'){
    frontend = i-1;
   break;
  }
 }
  for(int i=frontend;i<s.size();i++){
    if((s[i] == '2')&& frontend != -1){
    tempcountfront++;
    }
  }
 if(frontend!=-1 && backend != -1){
  ans+=min(tempcountfront, tempcountback);
 } else if(frontend == -1 && backend != -1){
  ans+=tempcountback;
 } else if(frontend != -1 && backend == -1){
  ans+=tempcountfront;
 }
 
 cout << ans << '\n';
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