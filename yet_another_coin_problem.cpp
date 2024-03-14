#include<bits/stdc++.h>
using namespace std;
using i64=long long;
int main(){
    i64 tt;
    cin>>tt;
    while(tt--){
        i64 n;
        cin>>n;
        vector<int>v={15,10,6,3,1};
        i64 rem=1,count=0,q=n;
        if(n==1){cout<<'1'<<endl;}
        else{
        for(int i=0 ; i<4 ; i++){
            