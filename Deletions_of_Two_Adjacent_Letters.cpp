#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    string s;
    cin >> s;
    char c;
    cin >> c;
    vector<int>v;
    for(int i=0 ; i<s.size() ; i++){
        if(s[i]==c){
            v.push_back(i+1);
        }
    }
    for(int i=0 ; i<v.size() ; i++){
        if(v[i]%2==1){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
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