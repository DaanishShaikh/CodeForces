#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    int n;
    cin >> n;
    if(n%7==0){
        cout<<n<<endl;
        return;
    }
    n=n/10;
    n=n*10;
    for(int i=n ; i<n+10 ; i++){
        if(i%7==0){
            cout<<i<<endl;
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