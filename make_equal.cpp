#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int sum=0;
    vector<int>v(n);
    for(int i=0 ; i<n ; i++){
        cin >> v[i];
        sum+=v[i];
    }
    int k=sum/n;
    for(int i=0;i<n-1 ; i++){
        if(v[i]<k){
            cout<<"NO"<<endl;
            return;
        }
        v[i+1]+=v[i]-k;
        v[i]=k;
    }
    cout<<"YES"<<endl;
}
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        solve();
    }
    return 0;
}
// #include<bits/stdc++.h>
// using namespace std;

// void solve() {
//     int n;
//     cin >> n;
//     vector<int> a(n);
//     for (int i = 0; i < n; ++i) {
//         cin >> a[i];
//     }
//     int k = 0;
//     for (int x : a) {
//         k += x;
//     }
//     k /= n;
//     for (int i = 0; i < n - 1; ++i) {
//         if (a[i] < k) {
//             cout << "NO" << endl;
//             return;
//         }
//         a[i + 1] += a[i] - k;
//         a[i] = k;
//     }
//     cout << "YES" << endl;
// }

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }
