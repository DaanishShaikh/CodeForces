/*Accepted*/
#include<bits/stdc++.h>
using namespace std;
using i64 = long long;
int main(){
    i64 tt;
    cin>>tt;
    while(tt--){
        i64 n;
        cin>>n;
        i64 i=2;
        if(n<2){cout<<'1'<<endl;}
        else{
        while(i<n){
            if(i*2>n){break;}
            i*=2;
            
        }
        cout<<i<<endl;
        }
    //     vector<i64>a(n);
    //     for(i64 i=0 ; i<n ; i++){
    //         a[i]=i+1;
    //     }
    //     for(i64 i=0 ; i<n ; i++){
    //         cout<<a[i]<<' ';
    //     }
    //     cout<<endl;
    //     i64 ld=0;
    //     bool flag=false;
    //     for(i64 i=2 ; i<=n ; i++ ){
    //         for(i64 j=i/2; j>0 ; j--){
    //             //cout<<"if=a["<<i<<"]="<<a[i]<<' '<<"a["<<j<<"]="<<a[ld]<<' '<<"i="<<i<<' '<<"j="<<j<<endl;         
    //             if(i%j==0){
    //                 ld=j;
    //                 flag=true;
    //                 //cout<<"if=a["<<i<<"]="<<a[i]<<' '<<"a["<<j<<"]="<<a[ld]<<' '<<"i="<<i<<' '<<"j="<<j<<endl;         
    //                 break;           
    //             }
    //         }
    //         swap(a[i-1],a[ld-1]);
    //         // for(int z=0 ; z<n ; z++){
    //         //     cout<<a[z]<<' ';
    //         // }
    //         //cout<<endl;
    //     }

    //     i64 ans=0;
    //     for(i64 i=0; i<n ; i++){
    //         if(a[i]==1){
    //             ans=i;
    //             break;
    //         }
    //     }
    //     cout<<ans+1<<endl;
    }
    return 0;
}