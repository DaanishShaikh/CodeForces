#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    int n;
    cin >> n;
    set<int>s;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        s.insert(v[i]);
    }
    if((n-s.size())%2==0){
        cout<<s.size()<<endl;
    } else {
        cout<<s.size()-1<<endl;
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