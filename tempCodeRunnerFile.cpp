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
    int mihai=0,bianca=0;
    sort(v.begin(), v.end(), greater<int>());
    // for(int i=0 ; i<n ; i++){
    //     cout<<v[i];
    // }
    bool flag=1;
    for(int i=0 ; i<n ; i++){
        if(v[i]%2==0){
            mihai+=v[i];
        } else {
            bianca+=v[i];
        }
        if(bianca>=mihai){
            flag=0;
            break;
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

    int tt;
    cin >> tt;

    while(tt--){
        solve();
    }

    return 0;
}