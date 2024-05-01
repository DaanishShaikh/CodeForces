#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
        unordered_map<int,int>occ;
        int n;
        cin >> n;
        for(int i=0 ; i<n ; i++){
            int x;
            cin >> x;

            if(x%2==1){
                occ[1]++;
            } else {
                occ[0]++;
            }
        }
        if(occ[1]==0){
            cout<<"NO"<<endl;
        } else if(occ[0]==0 && occ[1]%2==1){
            cout<<"YES"<<endl;
        } else if(occ[0]==0 && occ[1]%2==0){
            cout<<"NO"<<endl;
        } else if(occ[1]!=0){
            cout<<"YES"<<endl;
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