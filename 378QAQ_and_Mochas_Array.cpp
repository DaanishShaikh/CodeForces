#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    int n;
    cin >> n;
    vector<int>v(n);
    set<int>st;
    bool one=0;
    bool two=0;
    for(int i=0 ; i<n ; i++){
        cin >> v[i];
        if(v[i]==1){
            one=1;
        }
        st.insert(v[i]);
    }
    if(one){
        cout<<"Yes"<<endl;
        return;
    }
    auto it=st.begin();
    int first=*(it);
    int second=*(++it);
    if(first==2 &&second%2==0){
        for(auto c:st){
            if(c%2==1){
                second=c;
                break;
            }
        }
    }
    //cout<<first<<second<<endl;
    for(int i=0 ; i<n; i++){
        if(v[i]%first && v[i]%second){
            cout<<"No"<<endl;
            return;
        }
    }
    cout<<"Yes"<<endl;
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