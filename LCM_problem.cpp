#include<bits/stdc++.h>
using namespace std;

using i64=long long;

// int euclidgcd(int a,int b){
//     int c=max(a,b);
//     int d=min(a,b);
//     int ans=0;
//     while(d){
//         c=d;
//         d=c%d; 
//     }
//     return c;
// }

void solve(){
    int n,m;
    cin >> n >> m;
    
    if(2*n>m){
        cout<<-1<<' '<<-1<<endl;
        return;
    } else {
        cout<<n<<' '<<2*n<<endl;
        return;
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