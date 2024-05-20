#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    int n;
    cin >> n;
    string s;
    cin >> s;
    set<char>st;
    for(int i=0 ; i<s.size() ; i++){
        st.insert(s[i]);
    }
    vector<char>c;
    for(auto s:st){
        c.push_back(s);
    }
    // for(int i=0 ; i<r.size() ; i++){
    //     st2.insert(r[i]);
    // }
    // for(auto s:st1){
    //     cout<<s<<' ';
    // }
    // cout<<endl;
    // for(auto s:st2){
    //     cout<<s<<' ';
    // }
    // cout<<endl;
    // vector<pair<char,char>>v;
    unordered_map<char,char>occ;
    for(int i=0,k=c.size()-1 ; i<=k ; i++,k--){
        // v.push_back(make_pair(c[i],c[k]));
        // v.push_back(make_pair(c[k],c[i]));
        occ[c[i]]=c[k];
        occ[c[k]]=c[i];
    }
    // for(auto s:occ){
    //     cout<<s.first<<' '<<s.second<<endl;
    // }
    vector<char>ans;
    for(int i=0 ; i<s.size() ; i++){
        ans.push_back(occ[s[i]]);
    }
    for(int i=0 ; i<ans.size() ; i++){
        cout<<ans[i];
    }
    cout<<endl;
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