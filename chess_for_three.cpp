#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    int sum=0;
    vector<int>v(3);
    for(int i=0 ; i<3 ; i++){
        cin>>v[i];
        sum+=v[i];
    }
    if(sum%2==1){
        cout<<-1<<endl;
        return;
    }
    int ans=0;
    while(true){
        if(v[1]==0){
            break;
        }
        sort(v.begin(),v.end());
        v[1]--;
        v[2]--;
        sort(v.begin(),v.end());
        ans++;
        
    }
    cout<<ans<<endl;
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