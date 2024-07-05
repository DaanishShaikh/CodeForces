#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    i64 n,k;
    cin >> n >> k;
        vector<int>a(n);
        for(int i = 0; i < n; i++) {
            a[i] = i + 1;
        }
        
        for(int i = 0, j = n - 1; i < j; i++) {
            if(k >= (j - i) * 2) {
                k -= (j - i) * 2;
                swap(a[i], a[j]);
                j--;
            }
        }
        
        if(k == 0) {
            cout << "YES" << '\n';
            for(int i = 0; i < n; i++) {
                cout << a[i] << ' ';
            }
        } else {
            cout << "NO"<<'\n';
            return;
        }
        
        cout << '\n';


}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;

    while(tt--){
        solve();
    }

    return 0;
}