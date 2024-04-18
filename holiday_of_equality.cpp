#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0 ; i<n ; i++){
        cin >> v[i];
    }
    int maxnum=INT_MIN;
    for(int i=0 ; i<n ; i++){
        maxnum=max(maxnum,v[i]);
    }
    int ans=0,sum=0;
    for(int i=0 ; i<n ; i++){
        ans+=maxnum-v[i];
    }    
    cout<<ans<<endl;
    return 0;
}