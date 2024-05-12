#include<bits/stdc++.h>
using namespace std;

using i64=long long;
bool is_sorted(string v){
    for(int i=0 ; i<v.size() ; i++){
        if(v[i]=='1'){
            for(int j=i ; j<v.size() ; j++){
                if(v[j]=='0'){
                    return 0;
                }
            }
        }
    }
    return 1;
}

void solve(){
    
    string s;
    cin >> s;
    if(is_sorted(s)){
        cout<<1<<endl;

        return;
    }
    vector<int>zeroes;
    int sum=1;
    int firstone=0;
    for(int i=1 ; i<s.size() ; i++){
        if(s[i]!=s[i-1]){
            sum++;
        }
    }
    for(int i=1 ; i<s.size() ; i++){
        if(s[i]=='1'&&s[i-1]=='0'){
            sum--;
            break;
        }
    }
    cout<<sum<<endl;
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