#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
 
// using u128 = unsigned__int128;
// using i128 = __int128;
 
void solve() {
   int n,m;
    cin >> n>>m;
    if(n==1){
        cout << "YES\n";
        return;
    }
    int count=1;
    int count_max=0;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i < n; i++) {
        if (a[i] == a[i-1]) {
            count++;
            count_max=max(count_max,count);
        } else {
            //cout << a[i-1] << " -> " << count << endl;
            count_max=max(count_max,count);
            count = 1;
        }
    }
    //cout<<"Max consecutive elements: "<<max(count_max,count)<<"\n";
    if(count_max>=m){
        cout << "NO\n";
        return;
    }
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