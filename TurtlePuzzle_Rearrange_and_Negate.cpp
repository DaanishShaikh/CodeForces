/*Accepted*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0 ; i<n ; i++){
            cin>>v[i];
            if(v[i]<0){
                v[i]=abs(v[i]);
            }
        }
        int sum=0;
        for(int i=0 ; i<n ; i++){
            sum+=v[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}