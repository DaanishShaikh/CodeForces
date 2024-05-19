#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    int n;
    cin >> n;
    set<int>st;
    for(int i=0 ; i<n ; i++){
        int x;
        cin >> x;
        st.insert(x);
    }
    cout<<st.size()<<endl;
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