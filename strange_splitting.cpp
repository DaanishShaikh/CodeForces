#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    int n;
    cin >> n;
    set<int>st;
    vector<int>v(n);
    for(int i=0 ; i<n ; i++){
        cin >> v[i];
        st.insert(v[i]);
    }
    if(v[0]==v[n-1]){
        cout<<"NO"<<endl;
        return;
    }
    if(st.size()==2){
        int target=-1;
        for(int i=1 ; i<n; i++){
            if(v[i-1]!=v[i]){
                target=i;
            }
        }
        if(target==n-1){
            cout<<"YES"<<endl;
            cout<<'R';
            for(int i=0 ; i<n-1 ; i++){
                cout<<'B';
            }
            cout<<endl;
            return;
        } else {
        cout<<"YES"<<endl;
        for(int i=0 ; i<=target ; i++){
            cout<<'R';
        }
        for(int i=target+1;i<n ; i++){
            cout<<'B';
        }
        cout<<endl;
        return;
        }
    }
    cout<<"YES"<<endl;
    for(int i=0 ; i<n-1 ; i++){
        cout<<'R';
    }
    cout<<'B'<<endl;
    
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