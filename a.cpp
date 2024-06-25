#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){

    int n,m;
    cin >> n >> m;
    string s;
    cin >> s;
    vector<int>v(m);
    for(int i=0 ; i<m ; i++){
        cin >> v[i];
        v[i]-=1;
    }
    string t;
    cin >> t;
    sort(v.begin(),v.end());
    sort(t.begin(),t.end());
    //cout<<"t="<<t<<endl;
    for(int i=0 ; i<m ; i++){
        if(s[v[i]]>t[i]){
        s[v[i]]=t[i];
        }
        //cout<<"t["<<i<<"]="<<t[i]<<endl;
    }
    cout<<s<<'\n';

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