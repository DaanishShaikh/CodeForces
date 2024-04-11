#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    if(n%2){
        if(k%2){
            cout<<((k-1)/2)+1<<endl;
        } else {
            cout<<n/2 +1+ (((k-2)/2)+1)<<endl;            
        }
    } else {
        if(k%2){
            cout<<((k-1)/2)+1<<endl;
        } else {
            cout<<n/2 + (((k-2)/2)+1)<<endl;
        }
    }
    return 0;
}