#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        int minnum=INT_MAX;
        vector<int>v(n);
        for(int i=0 ; i<n ; i++){
            cin >> v[i];
            minnum=min(minnum,v[i]);
        }
        int ans=0;
        for(int i=0 ; i<n ; i++){
            ans+=v[i]-minnum;
        }
        cout<<ans<<endl;
    }
    return 0;
}