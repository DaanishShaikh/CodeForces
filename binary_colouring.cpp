#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    i64 n;
    cin >> n;
    vector<int>v;
    while(n){
        v.push_back(n%2);
        n/=2;
    }
    vector<int>ans;
    for(int i=v.size()-1 ;i>=0 ; i--){
        ans.push_back(v[i]);
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