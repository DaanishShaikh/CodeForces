#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    i64 n;
    cin >> n;
    i64 sum=0;
    vector<i64>v(n);
    for(int i=0; i<n ; i++){
        cin >> v[i];
        sum+=v[i];
    }
    i64 root=sqrt(sum);
    if(root*root==sum){
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