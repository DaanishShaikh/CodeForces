#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    int n;
    cin >> n;
    string s;
    cin >> s;
    for(int i=1 ; i<s.size() ; i++){
        if((s[i]=='1'&&s[i-1]=='0')||(s[i-1]=='1'&&s[i]=='0')){
            s.erase(s.begin()+i-1);
            s.erase(s.begin()+i-1);
            i-=2;
        }
    }
    cout<<s.size()<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
        solve();
    

    return 0;
}