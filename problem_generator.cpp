#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    int n,m;
    cin >> n >> m;
    string s;
    cin >> s;
    unordered_map<char,int>occ;
    for(char i='A' ; i<='G' ; i++){
        occ[i]=0;
    }
    for(int i=0 ; i<s.size() ; i++){
        occ[s[i]]++;
    }
    int ans=0;
    for(auto c:occ){
        if(c.second<m){
            ans+=m-c.second;
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