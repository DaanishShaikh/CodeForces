#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0 ; i<n ;i++){
        cin >> v[i];
    }
    int maxi=INT_MIN;
    int mini=INT_MAX;
    for(int i=0; i<n ; i++){
        maxi=max(maxi,v[i]);
        mini=min(mini,v[i]);
    }
    int maxindex=0;
    int minindex=0;
    for(int i=0 ; i<n ; i++){
        if(v[i]==maxi){
            maxindex=i;
        }
        if(v[i]==mini){
            minindex=i;
        }
    }
    // maxindex++;
    // minindex++;
    // cout<<"max="<<maxindex<<endl;
    // cout<<"min="<<minindex<<endl;
    int ans=0;
    int smaller=min(minindex,maxindex);
    int bigger=max(maxindex,minindex);
    ans+=min(bigger+1,n-bigger);
    if(n-bigger>=bigger+1){
        cout<<ans<<endl;
        return;
    }
    cout<<min(n-abs(maxindex-minindex)+1, min(max(maxindex,minindex)+1, n-min(maxindex,minindex)))<<endl;
    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;

    while(tt--){
        solve();
    }

    return 0;
}