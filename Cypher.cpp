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
    vector<string>s;
    for(int i=0 ; i<n ; i++){
        int x;
        cin >> x;
        string z;
        cin >> z;
        s.push_back(z);
    }
    vector<int>changes;
    
    for(int i=0 ; i<n ; i++){
        int sum=0;
        for(int j=0 ; j<s[i].size() ; j++){
            if(s[i][j]=='D'){
                sum++;
            } else {
                sum--;
            }
        }
        changes.push_back(sum);
    }
    // for(int i=0 ; i<changes.size() ; i++){
    //     cout<<changes[i]<<' ';
    // }
    // cout<<endl;
    for(int i=0 ; i<changes.size() ; i++){
        if(changes[i]>=0){
            if(changes[i]+v[i]<=9){
                v[i]+=changes[i];
            } else {
                v[i]=v[i]+changes[i]-10;
            }
        } else {
            if(changes[i]+v[i]>=0){
                v[i]=changes[i]+v[i];
            } else {
                v[i]=changes[i]+v[i]+10;
            }
        }
    }
    for(int i=0 ; i<n ; i++){
        cout<<v[i]<<' ';
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