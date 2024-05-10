#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int nonmiddle=0;
    if(c<=max(a,b)&&c>=min(a,b)){
        if(d>=max(a,b)||d<=min(a,b)){
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    } else if(d<=max(a,b)&&d>=min(a,b)){
        if(c>=max(a,b)||c<=min(a,b)){
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    } else {
        cout<<"NO"<<endl;
    }

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