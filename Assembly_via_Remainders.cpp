#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    int n;
    cin >> n;
    vector<int>v(n-1);
    for(int i=0 ; i<n-1 ; i++){
        cin >> v[i];
    }
    vector<int>ans;
    ans.push_back(v[0]+1);
    for(int i=1,j=0 ; i<n ; i++){
        if(ans[i-1]>v[j]){
            ans.push_back(ans[i-1]-v[j]);
            
        } else if(ans[i-1]<v[j]){
            ans.push_back(ans[i-1]+v[j]);
            
        } else {
            ans.push_back(v[j]+1);
        }
        j++;
    }
    
    for(auto s:ans){
        cout<<s<<' ';
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