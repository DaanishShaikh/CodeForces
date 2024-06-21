#include<bits/stdc++.h>
using namespace std;

using i64=long long;

i64 fact(i64 x){
    i64 result=1;
    while(x){
        result*=x;
        x--;
    }
    return result;
}

void solve(){
    
    i64 x,y;
    cin >> x >> y;
    i64 a=fact(min(x,y));
    cout<<a<<'\n';

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
        solve();

    return 0;
}