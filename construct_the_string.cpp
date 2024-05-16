#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    int a,b,c;
    cin >> a >> b >> c;
    if(b!=1){
    vector<char>semians;
    while(semians.size()<a){
    for(int i=97 ; i<97+c ; i++){
        semians.push_back(static_cast<char>(i));
    }
    }
    while(semians.size()-a){
        semians.pop_back();
    }
    for(int i=0 ; i<semians.size() ; i++){
        cout<<semians[i];
    }
    cout<<endl;
    } else {
        vector<char>semians;
    while(semians.size()<a){
        for(char i='a' ; i<='z' ; i++){
        semians.push_back(static_cast<char>(i));
    }
    }
    while(semians.size()-a){
        semians.pop_back();
    }
    for(int i=0 ; i<semians.size() ; i++){
        cout<<semians[i];
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