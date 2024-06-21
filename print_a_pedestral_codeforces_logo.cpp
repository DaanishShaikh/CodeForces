#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    int n;
    cin >> n;
    for(int y=3 ; y<n ; y++){
        int z=(n-y)/2;
        int x=n-y-z;
        if(z>1 && x+1<y){
            z--;
            x++;
        }
        if(y>x && x>z){
            cout<<x<<' '<<y<<' '<<z<<'\n';
            return;
        }
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