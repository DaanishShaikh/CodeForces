#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    int n;
    cin >> n;
    string s;
    cin >> s;
    string ans="";
    for(int i=0 ; i<s.size() ; i++){
        for(int j=i+1 ; j<s.size() ; j++){
            if(s[i]==s[j]){
                ans+=s[i];
                i=j;
                break;
            }
        }
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