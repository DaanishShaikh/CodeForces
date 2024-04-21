#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        int maxi=INT_MIN,mini=INT_MAX;
        vector<int>v(n);
        for(int i=0 ; i<n ; i++){
            cin>>v[i];
            maxi=max(maxi,v[i]);
            mini=min(mini,v[i]);
        }
        cout<<maxi-mini<<endl;
    }
    return 0;
}