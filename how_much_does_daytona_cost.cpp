#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n,k;
        cin>>n>>k;
        bool flag=false;
        vector<int>v(n);
        for(int i=0 ; i<n ; i++){
            cin>>v[i];
            if(v[i]==k){
                flag=true;
            }
        }
        if(flag){
            cout<<"YES"<<"\n";
        } else {
            cout<<"NO"<<"\n";
        }
    }
    return 0;
}