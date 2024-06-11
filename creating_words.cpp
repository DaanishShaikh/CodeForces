#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    string s;
    cin >> s;
    string r;
    cin >> r;
    int temp=s[0];
    s[0]=r[0];
    r[0]=temp;
    cout<<s<<' '<<r<<endl;

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