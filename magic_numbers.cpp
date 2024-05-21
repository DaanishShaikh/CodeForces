#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    string s;
    cin >> s;
    int count=0;
    for(int i=0 ; i<s.size() ; i++){
        if(count>=3){
            cout<<"NO"<<endl;
            return;
        }
        if(s[i]=='4'){
            count++;
        } else {
            if(count>=3){
                count=0;
                cout<<"NO"<<endl;
                return;
            }
            count=0;
        }
        if(s[i]!='4'&&s[i]!='1'){
            cout<<"NO"<<endl;
            return;
        }
        if(i==s.size()-1&&count>=3){
            cout<<"NO"<<endl;
            return;
        }
    }
    if(s[0]=='4'){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

        solve();

    return 0;
}