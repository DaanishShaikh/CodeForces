#include<bits/stdc++.h>
using namespace std;
using i64=long long;
int main(){
    i64 tt;
    cin >>tt;
    while(tt--){
        i64 n;
        cin >>n;
        // for(i64 x=1 ; x<=n ; x++){ 
        //         for(int k=2 ; k<=30 ; k++){
        //            if((long long)x*((long long)pow(2,k)-1)==(long long)n){
        //             ans=x;
        //             break;
        //            } 
        //         }
        // }
        // cout<<ans<<endl;
        i64 two=4;

        while(n%(two-1)){
            two*=2;
        }
        i64 ans=n/(two-1);
        // cout<<two<<endl;
        cout<<ans<<endl;
    }
    return 0;
}