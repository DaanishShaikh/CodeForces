#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    string s;
    cin >> s;
    string t;
    cin >> t;
    stack<char>stk;
    int pos=1;
    for(int i=t.size()-1 ; i>=0 ; i--){
        stk.push(t[i]);
    }
    int i=0;
    while(stk.size()){
        // cout<<"stack top="<<stk.top()<<"s["<<i<<"]="<<s[i]<<endl;
        if(s[i]==stk.top()){
            i++;
        }
        stk.pop();
    }
    cout<<i+1<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    

    
        solve();
    

    return 0;
}