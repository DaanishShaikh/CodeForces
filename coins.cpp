#include<bits/stdc++.h>
using namespace std;
int main(){
    long long tt;
    cin>>tt;
    while(tt--){
        long long n,k;
        cin>>n>>k;
        if(n>=k){
        if(k==1){
            cout<<"YES"<<endl;
        }
        else if(n%2==0){
            cout<<"YES"<<endl;
        }
        else if(k%2==1){
            cout<<"YES"<<endl;
        } else {
            if((n%k)%2==0){
                cout<<"YES"<<endl;
            } else {
                cout<<"NO"<<endl;
            }
        }
        } else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}