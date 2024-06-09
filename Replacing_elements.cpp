#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    int n,k;
    cin >> n >> k;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    bool flag=1;
    for(int i=0 ; i<n ; i++){
        if(v[i]>k){
            flag=0;
        }
    }
    if(flag){
        cout<<"YES"<<endl;
        return;
    }
    sort(v.begin(),v.end());
    if(v[0]+v[1]<=k){
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
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