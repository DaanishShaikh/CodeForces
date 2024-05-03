#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    int n;
    cin >>n;
    vector<int>v;
    int twos=1;
    int temp=n;
    while(temp--){
        twos*=2;
    v.push_back(twos);
    }
    int sum1=0;
    int sum2=0;
    sum1+=v.back();
    v.pop_back();
    temp=n/2;
    while(temp--){
        sum2+=v.back();
        //cout<<"sum2="<<sum2<<"v.back()="<<v.back()<<endl;
        v.pop_back();
    }
    while(v.size()){
        sum1+=v.back();
        //cout<<"sum1="<<sum1<<"v.back()="<<v.back()<<endl;
        v.pop_back();
    }
    cout<<abs(sum1-sum2)<<endl;
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