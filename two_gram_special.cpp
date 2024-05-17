#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    int n;
    cin >> n;
    string s;
    cin >> s;
    unordered_map<string,int>occ;
    for(int i=1 ; i<s.size() ; i++){
        string a=s.substr(i-1,2);
        occ[a]++;
    }
    int maxi=INT_MIN;
    for(auto s:occ){
        maxi=max(s.second,maxi);
    }
    string ans;
    for(auto s:occ){
        if(s.second==maxi){
            ans=s.first;
        }
    }
    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
        solve();

    return 0;
}