#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    int n;
    cin >> n;
    int sum=0;
    vector<int>v(n);
    for(int i=0 ; i<n ; i++){
        cin>>v[i];
        sum+=v[i];
    }
    if(sum==n){
        cout<<0<<endl;
        return;
    }
    if(sum<=0){
        cout<<1<<endl;
        return;
    } else {
        if(sum<n){
            cout<<1<<endl;
            return;
        } else {
            cout<<sum-n<<endl;
            return;
        }
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