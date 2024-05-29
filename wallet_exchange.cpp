#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    i64 x,y;
    cin >> x>> y;
    if((x+y)%2==0){
        cout<<"Bob"<<endl;
    } else {
        cout<<"Alice"<<endl;
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