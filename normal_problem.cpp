#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    string s;
    cin >> s;
    for(int i=s.size()-1 ; i>=0 ; i--){
        if(s[i]=='q'){
            cout<<'p';
        } else if(s[i]=='p'){
            cout<<'q';
        } else if(s[i]=='w'){
            cout<<'w';
        }
    }
    cout<<'\n';

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