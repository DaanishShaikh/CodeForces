#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i=0 ; i<n ; i++){
        cin >> a[i];
    }
    vector<int>b(n);
    for(int i=0 ; i<n ; i++){
        cin >> b[i];
    }
    int m;
    cin >> m;
    vector<int>d(m);
    for(int i=0 ; i<m ; i++){
        cin >> d[i];
    }
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (b[i] == d[m-1]) {
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "NO" << endl;
        return;
    }
    map<int,int>f;
    for(int i=0 ; i<n ; i++){
        if(a[i]!=b[i]){
            f[b[i]]++;
        }
    }
    map<int,int>s;
    for(auto c:f){
        s[c.first]=0;
        //cout<<"c.first="<<c.first<<endl;
    }
    for(int i=0 ; i<m ; i++){
        s[d[i]]++;
    }
    // for(auto c:s){
    //     cout<<c.first<<'='<<c.second<<endl;
    // }
    for(auto c:f){
        if(s[c.first]<c.second){
            cout<<"NO"<<endl;
            //cout<<"s["<<c.first<<"]="<<s[c.first]<<"c.second="<<c.second<<endl;
            return;
        }
    }
        cout<<"YES"<<endl;
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