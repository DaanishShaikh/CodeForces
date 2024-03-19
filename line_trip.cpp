/*Accepted*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n, x;
        cin >> n >> x ;
        vector<int>v(n);
        for(int i= 0 ; i<n ; i++){
            cin>>v[i];
        }
        vector<int> d(n+1);
        d[0]=v[0];
        for(int i=1,j=0 ; i<n&&j<n ; i++,j++){
            d[i]=v[j+1]-v[j];
            // cout<<"d["<<i<<"]="<<d[i]<<"v["<<j+1<<"]="<<v[j+1]<<"v["<<j<<"]="<<v[j]<<endl;
        }
        d[n]=2*(x-v[n-1]);
        for(int i=0 ; i<d.size() ; i++){
            // cout<<"d["<<i<<"]="<<d[i]<<endl;
        } 
        // cout<<endl;
        int maxi=d[0];
        for(int i=0 ; i<d.size() ; i++){
            maxi=max(d[i],maxi);
        }
        cout<<maxi<<endl;
    }
    return 0 ;
}