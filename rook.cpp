#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    string s;
    cin >> s;
    for(char i='a'; i<='h';i++){
        if(i==s[0]){
            continue;
        }
        cout<<i<<s[1]<<endl;
    }
    for(int i=1;i<=8 ; i++){
        if(i==s[1]-'0'){
            continue;
        }
        cout<<s[0]<<i<<endl;
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