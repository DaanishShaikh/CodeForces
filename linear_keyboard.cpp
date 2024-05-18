#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    string keyboard;
    cin>>keyboard;
    string s;
    cin>>s;
    if(s.size()==0){
        cout<<0<<endl;
        return;
    }
    vector<int>semians;
    int ans=0;
    for(int i=0 ; i<s.size() ; i++){
        for(int j=0 ; j<keyboard.size() ; j++){
            if(s[i]==keyboard[j]){
                semians.push_back(j+1);
                break;
            }
        }
    }
    
    for(int i=1 ; i<semians.size() ; i++){
        ans+=abs(semians[i]-semians[i-1]);
    }
    cout<<ans<<endl;
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