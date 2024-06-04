#include<bits/stdc++.h>
using namespace std;

using i64=long long;

int GCD(int n, int m){
    while(n && m){
        if(n>=m){
            n%=m;
        } else {
            m%=n;
        }
    }
    if(m==0){
    return n;
    } else {
        return m;
    }
}

void solve(){
    
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0 ; i<n ; i++){
        cin >> v[i];
    }
    vector<int>ans;
    for(int i=1 ; i<n ; i++){
        ans.push_back(GCD(v[i-1],v[i]));
    }
    for(auto c:ans){
        cout<<c<<' ';
    }
    cout<<endl;
    int temp=-1;
    vector<int>copy(v);
    sort(copy.begin(),copy.end());
    int count=0;
    for(int i=0 ; i<ans.size() ; i++){
        if(ans[i]!=copy[i]){
            count++;
            temp=i;
        }
    }
    if(count<=1){
        cout<<"YES"<<endl;
        return;
    }
    if(temp>=0){
        vector<int>secondans;
        v.erase(v.begin()+temp);
        for(int i=1; i<n ; i++){
            secondans.push_back(GCD(v[i-1],v[i]));
        }
        if(is_sorted(secondans.begin(),secondans.end())){
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
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