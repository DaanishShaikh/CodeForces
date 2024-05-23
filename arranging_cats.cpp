#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    int n;
    cin >> n;
    string a;
    cin >> a;
    string b;
    cin >> b;
    int zero2one=0;
    int one2zero=0;
    for(int i=0 ; i<n ; i++){
        if(a[i]=='0' && b[i]=='1'){
            zero2one++;
        } else if(a[i]=='1' && b[i]=='0'){
            one2zero++;
        }
    }
    cout<<max(zero2one,one2zero)<<endl;
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