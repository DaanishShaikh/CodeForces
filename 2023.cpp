#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    int n,k;
    cin >> n >> k;
    i64 product=1;
    for(int i=0 ; i<n ; i++){
        int x;
        cin >> x;
        product*=x;
    }
    if(2023%product==0){
        cout<<"YES"<<endl;
        cout<<2023/product<<' ';
        for(int i=0 ; i<k-1 ; i++){
            cout<<1<<' ';
        }
        cout<<endl;
    } else {
        cout<<"NO"<<endl;
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