#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    int a,b;
    cin >> a >> b;
    if(a==0&&b==0){
        cout<<1<<endl;
        return;
    }
    if(a==0&&b!=0){
        cout<<1<<endl;
        return;
    }
    if(a!=0&&b==0){
        cout<<a+1<<endl;
        return;
    }
    cout<<a+(b*2)+1<<endl;
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