#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    vector<vector<char>>v(8,vector<char>(8));
    int x=0,y=0,n=0,m=0;
    for(int i=0 ; i<8 ; i++){
        for(int j=0 ; j<8 ; j++){
            cin >> v[i][j];
        }
    }
    for(int i=1 ; i<=8 ; i++){
        for(int j=1 ; j<=8 ; j++){
            if(v[i][j]=='#' && v[i+1][j+1]=='#' && v[i-1][j-1]=='#' && v[i+1][j-1]=='#' &&v[i-1][j+1]=='#'){
                cout<<i+1<<' '<<j+1<<'\n';
                return;
            }
        }
    }
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