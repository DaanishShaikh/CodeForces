#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    int n,m;
    cin >> n >> m;
    vector<vector<char>>v(n,vector<char>(m));
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            cin >> v[i][j];
        }
    }
    int frhash=-1;
    int fchash=-1;
    int count=0;
    bool flag=0;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            if(v[i][j]=='#'){
                fchash=j;
                frhash=i;
                //cout<<"r="<<frhash<<' '<<"c="<<fchash<<"\n";
                flag=1;
                break;
            }
        }
        if(flag){
            break;
        }
    }
    for(int i=frhash ; i<n ; i++){
        if(v[i][fchash]=='#'){
            count++;
        } else {
            break;
        }
    }
    cout<<(frhash+(count/2))+1<<' '<<(fchash)+1<<"\n";
    return;
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