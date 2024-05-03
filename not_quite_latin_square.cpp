#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    int target=0;
    vector<char> s={'A','B','C'};
    vector<vector<char>>v(3,vector<char>(3));
    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<3 ; j++){
            cin >> v[i][j];
            if(v[i][j]=='?'){
                target=i;
            }
        }
    }
    for(int j=0 ; j<3 ; j++){
        if (v[target][j] != '?') {
            s.erase(remove(s.begin(), s.end(), v[target][j]), s.end());
        }
    }
    cout<<s[0]<<endl;
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