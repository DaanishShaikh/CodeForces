#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    int n;
    cin >> n;
    int ans=INT_MIN;
    int actualans=-1;
    for(int i=2 ; i<=n ; i++){
        int sum=0;
        for(int j=1 ; j<=n ; j++){
            if(j*i<=n){
                sum+=j*i;
            } else {
                break;
            }
        }
        if(sum>=ans){
        ans=max(sum,ans);
        actualans=i;
        }
    }
    cout<<actualans<<endl;
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