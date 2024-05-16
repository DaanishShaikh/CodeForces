#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    string s;
    cin >> s;
    bool flag=0;
    for(int i=0 ; i<5 ; i++){
        char x,y;
        cin>>x>>y;
        if(x==s[0]||y==s[1]){
            flag=1;
        }
    }
    if(flag){
    cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

   
        solve();
    

    return 0;
}