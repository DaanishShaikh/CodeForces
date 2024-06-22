#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    int n;
    cin >> n;
    string s;
    cin >> s;
    set<string>st;
    for(int i=1 ; i<n ; i++){
        string t;
        t+=s[i-1];
        t+=s[i];
        st.insert(t);
    }
    cout<<st.size()<<'\n';
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