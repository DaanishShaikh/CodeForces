#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    int n;
    cin >> n;
    vector<int>v(n);
    int esum=0;
    int osum=0;
    for(int i=0 ; i<n ; i++){
        cin >> v[i];
        if(v[i]%2){
            osum+=v[i];
        } else {
            esum+=v[i];
        }
    }
    if(esum>osum){
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