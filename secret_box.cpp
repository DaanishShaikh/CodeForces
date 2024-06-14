#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    int x,y,z;
    cin >> x >> y >> z;
    i64 k;
    cin >> k;

    i64 ans=0;
    for(int a=1 ; a<=x ; a++){
        for(int b=1 ; b<=y ; b++){
            if(k%(a*b)>0){
                continue;
            } else {
                i64 c=k/(a*b);
                if(c>z){
                    continue;
                }
                ans=max(ans,1LL*(x-a+1)*(y-b+1)*(z-c+1));
            }
        }
    }
    cout<<ans<<"\n";

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