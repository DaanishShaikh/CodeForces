#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    int n,k;
    cin>>n>>k;
    vector<int>ans;
    int i=1;
    for( ; i<=k+1 ; i++){
        ans.push_back(i);
    }
    vector<int>v;
    for(int i=(k)+2 ; i<=n; i++){
        v.push_back(i);
    }
    sort(v.begin(),v.end(),greater<int>());
    for(int i=0 ; i<ans.size() ; i++){
        v.push_back(ans[i]);
    }
    for(int i=0 ; i<v.size() ; i++){
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