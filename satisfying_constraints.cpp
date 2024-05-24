#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    int n;
    cin >> n;
    unordered_map<int,vector<int>>occ;
    for(int i=0 ; i<n ; i++){
        int x, y;
        cin >> x >> y;
        occ[x].push_back(y);
    }
    int great=INT_MIN;
    int small=INT_MAX;
    for(auto c:occ){
        if(c.first==1){
        for(int i=0 ; i<c.second.size() ; i++){
            great=max(great,c.second[i]);
        }
        }
        if(c.first==2){
        for(int i=0 ; i<c.second.size() ; i++){
            small=min(small,c.second[i]);
        }
        }
    }
    int ans=0;
    if(great<=small){
    ans=abs(great-small)+1;
    }
    for(auto c:occ[3]){
        if(c>=great && c<=small){
            ans--;
        }
    }
    cout<<ans<<endl;
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