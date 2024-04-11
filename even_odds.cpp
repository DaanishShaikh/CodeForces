#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    if(n%2){
        if(k<n/2){
            cout<<1+((k-1)*2)<<endl;
        } else {
            cout<<1+ (2+(((k-n/2)-1)*2))<<endl;            
        }
    } else {
        if(k%2){
            cout<<1+((k-1)*2)<<endl;
        } else {
            cout<<n/2 + (2+(k-1)*2)<<endl;            
        }
    }
    return 0;
}