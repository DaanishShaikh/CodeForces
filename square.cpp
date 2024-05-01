#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    vector<pair<int,int>>v;
    for(int i=0 ; i<4 ; i++){
        int x,y;
        cin >> x >> y;
        v.push_back(make_pair(x,y));
    }
    bool flag=0;
    for(int i=0 ; i<4 ; i++){
        for(int j=0 ; j<4 ; j++){
            if(v[i].first==v[j].first && i!=j){
                //cout<<v[i].first<<v[j].first<<endl;
                cout<<(abs(v[i].second-v[j].second)*abs(v[i].second-v[j].second))<<endl;
                //cout<<v[i].second<<v[j].second<<endl;
                flag=1;
                break;
            }
        }
        if(flag){
            break;
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