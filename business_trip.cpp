#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    int k;
    cin >> k;
    int sum=0;
    vector<int>v(12);
    for(int i=0 ; i<12 ; i++){
        cin >> v[i];
        sum+=v[i];
    }
    if(sum>=k){
    sort(v.begin(),v.end());
    int count=0;
    for(int i=11 ; i>=0&&k>0 ; i--){
        k-=v[i];
        count++;
    }
    cout<<count<<endl;
    } else {
        cout<<-1<<endl;
    }

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
        solve();
    

    return 0;
}