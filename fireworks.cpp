#include<bits/stdc++.h>
using namespace std;
using i64=long long;
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        i64 a, b, m;
        cin >> a >> b >> m;
        i64 ans=0;
        i64 temp=m+a;
        ans+=temp/a;
        temp=m+b;
        ans+=temp/b;
        // if(m%a==0){
        //     ans++;
        // }
        // if(m%b==0){
        //     ans++;
        // }
        cout<<ans<<endl;
    }
    return 0;
}