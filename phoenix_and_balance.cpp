#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    int n;
    cin >>n;
    vector<int>v;
    int twos=1;
    while(n--){
        twos*=2;
    v.push_back(twos);
    }
    int sum1=0;
    int sum2=0;
    
    if(v.size()>2){
        for(int i=0,k=v.size()-1 ; i<k ; i++,k--){
            if(i%2==0){
                sum1+=v[i]+v[k];
            } else {
                sum2+=v[i]+v[k];
            }
        }
        cout<<abs(sum1-sum2)<<endl;
    } else {
        cout<<abs(v[0]-v[1]);
    }
    // for(auto s:v){
    //     cout<<s<<endl;
    // }
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