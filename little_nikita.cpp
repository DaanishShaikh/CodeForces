#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    int x,y;
    cin >> x >> y;
    if(x<y){
        cout<<"No"<<endl;
        return;
    } else {
        if(x==y){
        cout<<"Yes"<<endl;
        return;
        } else {
            if(x>y){
                if((x-y)%2==0){
                    cout<<"Yes"<<endl;
                    return;
                } else {
                    cout<<"No"<<endl;
                    return;
                }
            }
        }
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