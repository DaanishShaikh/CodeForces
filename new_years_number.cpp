#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        // bool flag=0;
        // double cuberoot= pow(n,1/3);
        // for(int x=0 ; x<=cuberoot ; x++){
        //     for(int y=0 ; y<=cuberoot ; y++){
        //         if((x*2021) + (y*2020) == n){
        //             flag=1;
        //             break;
        //         }
        //     }
        //     if(flag){
        //         break;
        //     }
        // }
        // if(flag){
        //     cout<<"YES"<<endl;
        // } else {
        //     cout<<"NO"<<endl;
        // }
        int cnt2021=n%2020;
        int cnt2020=(n-cnt2021)/2020 - cnt2021;
        if (cnt2020 >= 0 && 2020 * cnt2020 + 2021 * cnt2021 == n) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
        // cout<<n%2020<<endl<<cnt2020<<endl;
    }
    return 0;
}