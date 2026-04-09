#include<bits/stdc++.h>
using namespace std;
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
#define YES cout<<"YES"<<"\n";
#define NO cout<<"NO"<<"\n";
 
// using u128 = unsigned__int128;
// using i128 = __int128;
 
void solve() {
   int n;
   cin >> n;
   vector<int>v(n);
   for(int i=0 ; i<n ; i++){
    cin >> v[i];
   }
   for(int i=0,k=n-1,j=1 ; i<n,k>=0 ; i++,k--,j+=2){
    if(((v[i]==j) && (v[k]==j+1))||((v[i]==j+1)&&(v[k]==j))){
      continue;
    } else {
      cout<<v[i]<<v[j]<<endl;
      NO;
      return;
    }
   }
   YES;
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