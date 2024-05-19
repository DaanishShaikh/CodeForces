#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    int n;
    cin >> n;
    string s;
    cin>> s;
    int count=0;
    int ans=0;
    for(int i=0 ; i<s.size() ; i++){
        if(s[i]=='x'){
            count++;
        } else {
            if(count>=3){
                ans+=count-2;
                count=0;
            } else {
                count=0;
            }
        }
        if(count>=3&&i==n-1){
            ans+=count-2;
            count=0;
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