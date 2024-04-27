#include<bits/stdc++.h>
using namespace std;
using i64 = long long;
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        i64 n;
        cin >> n;
        i64 count=0;
        for(i64 i=1 ; i<=9 ; i++){
            i64 x=i;
            for(i64 j=i ; j<=n ; j+=x){
                count++;
                //cout<<j<<' ';
                x*=10;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}