/*12345*/
#include<bits/stdc++.h>
using namespace std;
 int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        int a[n*3];
        for(int i=0 ; i<n*3 ; i++){
            cin>>a[i];
        }
        cout<<endl;
        for(int i=0 ; i<n*3 ; i++){
            cout<<a[i];
        }
    }
    return 0;
 }