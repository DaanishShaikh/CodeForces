#include<bits/stdc++.h>
using namespace std;
int main(){
    long n;
    cin >> n;
    long long ans=0;
    while(n>=5){
    if(n>=100){
        //cout<<"100"<<endl;
        ans+=n/100;
        n%=100;
    }
    else if(n>=20){
        //cout<<"20"<<endl;
        ans+=n/20;
        n%=20;
    }
    else if(n>=10){
        //cout<<"10"<<endl;
        ans+=n/10;
        n%=10;
    }
    else if(n>=5){
        //cout<<'5'<<endl;
        ans+=n/5;
        n%=5;
    } 
    }
    ans+=n;
    cout<<ans<<endl;
    return 0;
}