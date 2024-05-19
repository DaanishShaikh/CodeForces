#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    string s;
    cin >> s;
    int ans=0;
    string pi="314159265358979323846264338327";
    for(int i=0 ; i<s.size() ; i++){
        if(s[i]!=pi[i]){
            break;
        }
        ans++;
    } 
    cout<<ans<<endl;
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