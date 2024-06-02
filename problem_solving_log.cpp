#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    int n;
    cin >> n;
    string s;
    cin >> s;
    unordered_map<char,int>occ;
    for(int i=0 ; i<s.size() ; i++){
        occ[s[i]]++;
    }
    int count=0;
    for(auto s:occ){
        if((s.first-'A')+1<=s.second){
            //cout<<s.first<<s.second<<' '<<'A'-s.first<<endl;
            count++;
        }
    }
    cout<<count<<endl;
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