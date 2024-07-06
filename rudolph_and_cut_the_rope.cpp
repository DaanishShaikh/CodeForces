#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    int n;
    cin >> n;
    int semians=0;
    int temp=n;
    while(temp--){
        int x,y;
        cin >> x >> y;
        if(y>=x){
            semians++;
        }
    }
    cout<<n-semians<<'\n';
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