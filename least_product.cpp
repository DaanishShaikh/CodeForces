#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    int n;
    cin >> n;
    vector<i64>v(n);
    i64 product=0;
    bool zero=0;
    for(int i=0 ; i<n ; i++){
        cin >> v[i];
        if(v[i]<0){
            product++;
        }
        if(v[i]==0){
            zero=1;
        }
    }

    if(zero){
        cout<<0<<endl;
        return ;
    } else if(product%2==1){
        cout<<0<<endl;
        return ;
    } else if(product%2==0){
        cout<<1<<endl;
        cout<<1<<' '<<0<<endl;
        return ;
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