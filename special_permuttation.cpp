#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    int n;
    cin >>n;
    vector<int>v;
    for(int i=1 ; i<=n ; i++){
        v.push_back(i);
    }
    for(int i =0 ; i<n-1 ; i++){
        if(v[i]==i+1){
            swap(v[i],v[i+1]);
        }
    }
    if(v.size()>2){
    swap(v[0],v[v.size()-1]);
    }
    for(int i=0 ; i<n ; i++){
        cout<<v[i]<<' ';
    }
    cout<<endl;
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