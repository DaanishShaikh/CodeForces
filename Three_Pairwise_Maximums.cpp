#include<bits/stdc++.h>
using namespace std;
 
using i64=long long;
 
void solve(){
    
    vector<int>v(3);
    cin >> v[0] >> v[1] >> v[2];
    sort(v.begin(),v.end());
    if(v[1]!=v[2]){
        cout<<"NO"<<endl;
    } else {
        cout<<v[0]<<' '<<v[0]<<' '<<v[2]<<endl;
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
