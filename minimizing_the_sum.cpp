#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n,k;
        cin >> n >> k;
        vector<int>v(n);
        for(int i=0 ; i<n ; i++){
            cin >> v[i];
        }
        if(n>1){
        vector<int>dp(n-1);
        for(int i=1 ; i<n ; i++){
            dp[i-1]=abs(v[i]-v[i-1]);
        }
        while(k--){
            int maxi=0;
            for(int i=0 ; i<dp.size() ; i++){
                if(dp[i]>=dp[maxi]){
                    maxi=i;
                }
            }
            if(v[maxi]>=v[maxi+1]){
            v[maxi]=min(v[maxi],v[maxi+1]);
            } else {
                v[maxi+1]=min(v[maxi],v[maxi+1]);
            }
            dp[maxi]=-1;
        }
        // cout<<"dp="<<endl;
        // for(int i=0 ; i<dp.size()  ; i++){
        //     cout<<dp[i]<<' ';
        // }
        // cout<<endl;
        // cout<<"new vector="<<endl;
        // for(int i=0 ; i<n ; i++){
        //     cout<<v[i]<<' ';
        // }
        // cout<<endl;
        int ans=0;
        for(int i=0 ; i<n ; i++){
            ans+=v[i];
        }
        cout<<ans<<endl;
        } else {
            cout<<v[0]<<endl;
        }
    }
    return 0;
}