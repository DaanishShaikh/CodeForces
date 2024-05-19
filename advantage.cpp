#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0 ; i<n ; i++){
        cin >> v[i];
    }
    vector<int>c(v);
    sort(c.begin(),c.end());
    int maxi=c[n-1];
    int smaxi=c[n-2];
    for(int i=0 ; i<n ; i++){
        if(v[i]!=maxi){
            cout<<v[i]-maxi<<' ';
        } else {
            cout<<v[i]-smaxi<<' ';
        }
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