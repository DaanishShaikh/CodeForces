#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    int n;
    cin >> n;
    vector<int>merge(2*n);
    unordered_set<int>ust;
    vector<int>ans;
    for(int i=0 ; i<2*n ; i++){
        cin >> merge[i];
        
        if(ust.find(merge[i])==ust.end()){
            ans.push_back(merge[i]);
            ust.insert(merge[i]);
        }
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