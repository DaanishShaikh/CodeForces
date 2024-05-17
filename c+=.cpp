#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    int a,b,c;
    cin >> a >> b >> c;
    int maxi=max(a,b);
    int mini=min(a,b);
    int count=0;
    for(int i=0 ; maxi<=c&&mini<=c ; i++){
        if(i%2){
            maxi+=mini;
        } else {
            mini+=maxi;
        }
        count++;
    }
    cout<<count<<endl;
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