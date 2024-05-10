#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    unordered_map<char,int>occ;
    string s;
    cin >> s;
    for(int i=0 ; i<s.size() ; i++){
        occ[s[i]]++;
    }
    if(occ.size()==1){
        cout<<"NO"<<endl;
    } else {
        cout<<"YES"<<endl;
        for(int i=0 ; i<s.size() ; i++){
            if(s[i]!=s[0]){
                swap(s[i],s[0]);
            }
        }
        for(int i=0 ; i<s.size() ; i++){
            cout<<s[i];
        }
        cout<<endl;
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