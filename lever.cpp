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
   for(int i=0 ; i<n ; i++){
    cin >> a[i];
   }
   vector<int>b(n);
   for(int i=0 ; i<n ; i++){
    cin >> b[i];
   }  
   int answer=0;
   for(int i= 0 ; i<n ; i++){
    if(a[i]>b[i]){
        answer+=a[i]-b[i];
    }
   }
   cout<<answer+1<<'\n';
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