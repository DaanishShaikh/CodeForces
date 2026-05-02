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
   vector<int> sixes;
   vector<int> twos;
   vector<int> threes;
   vector<int> remaining;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i]%6 == 0) {
            sixes.push_back(a[i]);
        }
        else if(a[i]%2 == 0) {
            twos.push_back(a[i]);
        }
        else if(a[i]%3 == 0) {
            threes.push_back(a[i]);
        }
        else {
            remaining.push_back(a[i]);
        }
    }
    for(int x : sixes) {
        cout << x << " ";
    }
    for(int x : threes) {
        cout << x << " ";
    }
    for(int x : remaining) {
        cout << x << " ";
    }
    for(int x : twos) {
        cout << x << " ";
    }cout<< "\n";
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