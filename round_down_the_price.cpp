#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    i64 n;
    cin >> n;
    if(n==1){
        cout<<0<<endl;
        return;
    }
    i64 ten=1;
    while(n>=ten){
        ten*=10;
    }
    if(ten>n){
        ten/=10;
    }
    cout<<n-ten<<endl;
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