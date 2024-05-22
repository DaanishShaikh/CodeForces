#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0 ; i<n ; i++){
        cin >> v[i];
    }
    vector<char>ans(n);
    map<char,int>occ;
    for(char i='a' ; i<='z' ; i++){
        occ[i]=0;
    }
        for(int j=0 ; j<n ; j++){
            for(auto &c:occ){
                if(c.second==v[j]){
                    ans[j]=c.first;
                    c.second++;
                    //cout<<c.first<<' '<<c.second<<endl;
                    break;
                }
            }
        }
    
    for(auto c:ans){
        cout<<c;
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