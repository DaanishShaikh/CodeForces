// #include<bits/stdc++.h>
// using namespace std;

// using i64=long long;

// void solve(){
    
//     int n,m;
//     cin >> n >> m;
//     vector<vector<int>>v(n,vector<int>(m));
//     for(int i=0 ; i<n ; i++){
//         for(int j=0 ; j<m ; j++){
//             cin >> v[i][j];
//         }
//     }
//     for(int i=0 ; i<n ; i++){
//         for(int j=0 ; j<m ; j++){
//             if(i==0 && j==0){
//                 if(v[i+1][j]<v[i][j]&&v[i][j+1]<v[i][j]){
//                     v[i][j]=max(v[i+1][j],v[i][j+1]);
//                 }
//             }
//             else if(j==0 && i!=0){
//                 if(i!=n-1){
//                     if(v[i+1][j]<v[i][j] && v[i][j+1]<v[i][j] && v[i-1][j]<v[i][j]){
//                         v[i][j]=max(v[i+1][j],max(v[i][j+1],v[i-1][j]));
//                         }
//                 } else {
//                     if(v[i+1][j]<v[i][j] && v[i-1][j]<v[i][j]){
//                         v[i][j]=max(v[i][j+1],v[i-1][j]);
//                     }
//                 }
//             }
//             else if(j!=0&&i==0){
//                 if(j!=m-1){
//                     if(v[i+1][j]<v[i][j]&&v[i][j+1]<v[i][j]&&v[i][j-1]<v[i][j]){
//                         v[i][j]=max(v[i+1][j],max(v[i][j+1],v[i][j-1]));
//                     }
//                 } else {
//                     if(v[i+1][j]<v[i][j] && v[i][j-1]<v[i][j]){
//                         v[i][j]=max(v[i+1][j],v[i][j-1]);
//                     }
//                 }
//             }
//             else if(j!=0&&i!=0){
//                 if(j!=m-1&&i!=n-1){
//                 if(v[i+1][j]<v[i][j]&&v[i][j+1]<v[i][j]&&v[i-1][j]<v[i][j]&&v[i][j-1]<v[i][j]){
//                     v[i][j]=max(max(v[i+1][j],v[i][j+1]),max(v[i-1][j],v[i][j-1]));
//                 }
//                 } else {
//                     if(v[i-1][j]<v[i][j] && v[i][j-1]<v[i][j]){
//                         v[i][j]=max(v[i-1][j],v[i][j-1]);
//                     }
//                 }
//             }
//         }
//     }
//     for(int i=0 ; i<n ; i++){
//         for(int j=0 ; j<m ; j++){
//             cout<<v[i][j]<<' ';
//         }
//         cout<<'\n';
//     }
// }

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int tt;
//     cin >> tt;

//     while(tt--){
//         solve();
//     }

//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;

using i64 = long long;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n, vector<int>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> v[i][j];
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            int current = v[i][j];
            bool shouldReplace = true;
            int maxNeighbor = INT_MIN;

            if (i > 0 && v[i - 1][j] >= current) shouldReplace = false; // Top
            if (i < n - 1 && v[i + 1][j] >= current) shouldReplace = false; // Bottom
            if (j > 0 && v[i][j - 1] >= current) shouldReplace = false; // Left
            if (j < m - 1 && v[i][j + 1] >= current) shouldReplace = false; // Right

            if (shouldReplace) {
                if (i > 0) maxNeighbor = max(maxNeighbor, v[i - 1][j]); // Top
                if (i < n - 1) maxNeighbor = max(maxNeighbor, v[i + 1][j]); // Bottom
                if (j > 0) maxNeighbor = max(maxNeighbor, v[i][j - 1]); // Left
                if (j < m - 1) maxNeighbor = max(maxNeighbor, v[i][j + 1]); // Right
                v[i][j] = maxNeighbor;
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << v[i][j] << ' ';
        }
        cout << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;

    while (tt--) {
        solve();
    }

    return 0;
}
