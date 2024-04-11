#include<bits/stdc++.h>
using namespace std;
using i64=long long;
int main(){
    i64 n,k;
    cin >> n >> k;
    if(n%2){
        if(k>(n/2)+1){
            cout<<2+((k-((n/2)+1)-1)*2)<<endl;
        } else {
            cout<<1+(k-1)*2<<endl;
        }
    } else {
        if(k>(n/2)){
            cout<<2+((k-((n/2))-1)*2)<<endl;
        } else {
            cout<<1+(k-1)*2<<endl;
        }
    }
    return 0;
}