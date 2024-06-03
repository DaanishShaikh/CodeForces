#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    int n,f,k;
    cin >> n >> f >> k;
    vector<int>v(n);
    for(int i=0 ; i<n ; i++){
        cin >> v[i];
    }
    int temp=v[f-1];
    //cout<<"temp="<<temp<<endl;
    int initcount=0;
    for(auto c:v){
        if(c==temp){
            initcount++;
        }
    }
    sort(v.begin(),v.end(),greater<int>());
    int count=0;
    for(int i=k ; i<n ; i++){
        if(v[i]==temp){
            count++;
            //cout<<"here="<<"v["<<i<<"]="<<v[i]<<endl;
        }
    }    
    // for(auto c:v){
    //     cout<<c<<' ';
    // }
    // cout<<endl;
    if(count==0){
        cout<<"YES"<<endl;
    } else if(count==initcount){
        cout<<"NO"<<endl;
    } else {
        cout<<"MAYBE"<<endl;
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