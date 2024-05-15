#include<bits/stdc++.h>
using namespace std;

using i64=long long;


void solve(){

    vector<vector<int>>v(10,vector<int>(10));
    for(int i=0 ; i<10 ; i++){
            v[0][i]=1;
    }
    for(int i=0 ; i<10 ; i++){
        v[i][0]=1;
    }
    for(int i=1 ; i<10 ; i++){
        for(int j=1 ; j<10 ; j++){
            v[i][j]=v[i-1][j]+v[i][j-1];
        }
    }
    
    int n;
    cin >> n;
    cout<<v[n-1][n-1]<<endl;

    // for(int i=0 ; i<10 ; i++){
    //     for(int j=0 ; j<10 ; j++){
    //         cout<<v[i][j]<<' ';
    //     }
    //     cout<<endl;
    // }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
        solve();
    
    return 0;
}