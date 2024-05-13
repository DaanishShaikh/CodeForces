#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    int a,b,c;
    cin >> a >> b >> c;
    int mini=min(a,b);
    int maxi=max(a,b);
    int count=0;
    while((float)(maxi-mini)/2>c){
        maxi-=c;
        mini+=c;
        count++;
    }
    if(maxi!=mini){
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