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
    if(v[0]%2==0){
        for(int i=0 ; i<n ; i+=2){
            if(v[i]%2==1){
                cout<<"NO"<<endl;
                return;
            }
        }
    } else {
        for(int i=0 ; i<n ; i+=2){
            if(v[i]%2==0){
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    if(v[1]%2==0){
        for(int i=1 ; i<n ; i+=2){
            if(v[i]%2==1){
                cout<<"NO"<<endl;
                return;
            }
        }
    } else {
        for(int i=1; i<n ; i+=2){
            if(v[i]%2==0){
                cout<<"NO"<<endl;
                return;
            }
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