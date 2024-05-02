#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    int n,m;
    cin >> n >> m;
    string a;
    cin >> a;
    string b;
    cin >> b;
    int j=0;
    for(int i=0 ; i<b.size() ; i++){
        if(a[j]==b[i]){
            j++;
        }
    }
    cout<<j<<endl;
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