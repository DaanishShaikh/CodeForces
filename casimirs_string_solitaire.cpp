#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    string s;
    cin >> s;
    unordered_map<char,int>occ;
    for(int i=0 ; i<s.size() ; i++){
        occ[s[i]]++;
    }
    if(occ['A']+occ['C']==occ['B']){
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
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