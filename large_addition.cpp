#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    string s;
    cin >> s;
    if(s[0]!='1'){
        //cout<<"first"<<endl;
        cout<<"NO"<<endl;
        return;
    }
    if(s[s.size()-1]=='9'){
        //cout<<"second"<<endl;
        cout<<"NO"<<endl;
        return;
    }
    bool flag=0;
    for(int i=1 ; i<s.size()-1 ; i++){
        if(s[i]=='0'){
            flag=1;
        }
    }
    if(flag){
        //cout<<"third"<<endl;
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    return;
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