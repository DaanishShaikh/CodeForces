#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    i64 n,f,a,b;
    cin >> n >> f >> a >> b;
    vector<i64>v(n);
    for(int i=0 ; i<n ; i++){
        cin >> v[i];
    }
    if(n==1){
        if(a*v[0]<=f && a*v[0]<=b){
            cout<<"NO"<<endl;
            return;
        }
    }
    f-=a*v[0];
    bool flag=0;
    for(int i=0 ; i<n-1 ; i++){
        if(a*(v[i+1]-v[i])>=a*b){
            f-=a*(v[i+1]-v[i]);
        } else {
            f-=a*b;
        }
        if(f==0){
            if(i!=n-1){
                flag=1;
            }
            break;
        }
        cout<<"f="<<f<<' '<<"a*(v[i+1]-v["<<i<<"])="<<a*(v[i+1]-v[i])<<endl;
    }
    if(flag){
        cout<<"NO"<<endl;
    } else {
        cout<<"YES"<<endl;
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