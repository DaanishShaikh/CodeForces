#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n,k;
        cin >> n>> k;
        if(k==1){
            for(int i=1 ; i<=n ; i++){
                cout<<i<<' ';
            }
            cout<<endl;
        } else if(k==n){
            while(n--){
                cout<<1<<' ';
            }
            cout<<endl;
        }
        else {
            cout<<"-1"<<endl;
        }
    }
    return 0;
}