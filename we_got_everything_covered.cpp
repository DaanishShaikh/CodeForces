#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    int a,b;
    cin >> a >> b;
    vector<char>ans;
    for(int i=0; i<a ; i++){
        char c='a';
        for(int j=0 ; j<b ; j++){
            ans.push_back(c);
            c++;
        }
    }
    for(int i=0 ; i<ans.size() ; i++){
        cout<<ans[i];
    }
    cout<<endl;
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