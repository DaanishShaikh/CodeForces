#include<bits/stdc++.h>
using namespace std;
using i64=long long;
int main(){
    i64 tt;
    cin >> tt;
    while(tt--){
    i64 a,b;
    cin >> a >> b;
    if(a!=b&&(abs(a-b)%10!=0)){
    b=abs(a-b);
    b=b/10+1;
    cout<<b<<endl;
    } 
    else if(abs(a-b)%10==0){
        cout<<abs(a-b)/10<<endl;
    } else {
        cout<<'0'<<endl;
    }
    }
    return 0;
}