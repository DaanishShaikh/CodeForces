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
   int first=-1, last=-1;
   vector<int> a(2*n);
   for (int i = 0; i < 2*n; i++) {
       cin >> a[i];
       if(a[i] == 0 && first == -1) {
           first = i;
       } else {
        last = i;
       }
   }
   vector<int> ans1;
   vector<int> ans2;
   int i=first, j=1;
   while (a[i+j]==a[i-j] && ((i-j)>=0) && ((i+j)<2*n))
   {
    ans1.push_back(a[i+j]);
    j++;
   }
    i=last, j=1;
    while (a[i+j]==a[i-j] && ((i-j)>=0) && ((i+j)<2*n)){
        ans2.push_back(a[i+j]);
    }
    cout<<"ans1:"<<'\n';
   for(int x: ans1) {
       cout<<x<<' ';
   }
    cout<<"\nans2:"<<'\n';
   for(int x: ans2) {
       cout<<x<<' ';
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