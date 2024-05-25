#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    int n;
    cin >> n;
    string s;
    cin >> s;
    int penalty=0;
    for(int i=0 ; i<s.size() ; i++){
        if(s[i]=='-'){
            penalty--;
        } else {
            penalty++;
        }
    }
    cout<<abs(penalty)<<endl;
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