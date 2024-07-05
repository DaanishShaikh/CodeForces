#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    string t;
    cin >> t;
    int ans=0;
    for(int i=0 ; i<n ; i++){
        ans+=min(abs(s[i]-t[i]),abs(max(s[i],t[i])-'9')+abs((min(t[i],s[i])-'0')+1));
        //cout<<abs(s[i]-t[i])<<' '<<abs(s[i]-'9')+abs((min(t[i],s[i])-'0')+1)<<endl;
    }
    cout<<ans<<'\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
        solve();

    return 0;
}