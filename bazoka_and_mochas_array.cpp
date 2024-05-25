#include<bits/stdc++.h>
using namespace std;

using i64=long long;
bool is_sorted(vector<int>v){
    for(int i=1 ; i<v.size() ; i++){
        if(v[i-1]>v[i]){
            return 0;
        }
    }
    return 1;
}
void solve(){
    
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0 ; i<n ; i++){
        cin >> v[i];
    }
    if(is_sorted(v)){
        cout<<"Yes"<<endl;
        return;
    }
    while(n--){
        v.insert(v.begin(), v[v.size()-1]);
        v.pop_back();
        if(is_sorted(v)){
            cout<<"Yes"<<endl;
            return;
        }
    }
    cout<<"No"<<endl;
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