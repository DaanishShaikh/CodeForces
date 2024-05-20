#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    int a,b;
    cin >> a >> b;
    int minb=0;
    if(b%2==0){
        minb=b/2;
    } else {
        minb=(b/2)+1;
    }
    b*=4;
    int sum=a+b;
    if(sum%15){
        cout<<max(sum/15+1,minb)<<endl;
        return;
    } else {
        cout<<max(sum/15,minb)<<endl;
        return;
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