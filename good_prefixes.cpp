#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    int n;
    cin >> n;
    vector<i64>v(n);
    for(int i=0 ; i<n ; i++){
        cin >> v[i];
    }
    int ans=0;
    vector<i64>c(v);
    for(int i=1 ; i<n ; i++){
        c[i]=c[i]+c[i-1];
    }
    i64 maxe=INT_MIN;
    i64 count=0;
    for(int i=0 ; i<n ; i++){
        maxe=max(maxe,v[i]);
        if(c[i]-maxe==maxe){
            count++;
        }
    }
    cout<<count<<endl;
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