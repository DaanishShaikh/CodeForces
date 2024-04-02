#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,b,n;
    cin>>a>>b>>n;
    int sum=0;
    for(int i=1 ; i<=n ; i++){
        sum+=a*i;
        //cout<<sum<<endl;
    }
    //cout<<sum<<endl;
    if(sum>=b){
        cout<<sum-b<<endl;
    } else {
        cout<<'0'<<endl;
    }
}