
#include<bits/stdc++.h>
using namespace std;

using i64=long long;

bool is_num(char c){
    if(c=='1'||c=='2'||c=='3'||c=='4'||c=='5'||c=='6'||c=='7'||c=='8'||c=='9'||c=='0'){
        return true;
    } else {
        return false;
    }
}

void solve(){
    
    int n;
    cin >> n;
    string s;
    cin >> s;
    for(int i=0 ; i<n ; i++){
        if(!is_num(s[i])){
            for(int j=i ; j<n ; j++){
                if(is_num(s[j])){
                    cout<<"NO"<<endl;
                    return;
                }
            }
        }
    }
    string copy=s;
    sort(copy.begin(),copy.end());
    for(int i=0 ; i<n ; i++){
        if(copy[i]!=s[i]){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
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