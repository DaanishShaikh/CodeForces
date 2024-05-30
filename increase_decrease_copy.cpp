// time complexity= Nloglog(N) + (q*log base 2 (N))
#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    int n;
    cin >> n;
    vector<int>first(n);
    for(int i=0 ; i<n ; i++){
        cin >> first[i];
    }
    vector<int>second(n+1);
    for(int i=0 ; i<n+1 ; i++){
        cin >> second[i];
    }
    int ans=0;
    int num=INT_MAX;
    bool flagplus=0;
    for(int i=0 ; i<n ; i++){
        if(abs(first[i]-second[n])<num){
        num=first[i];
        }
        ans+=abs(first[i]-second[i]);
        if(second[i]<=max(first[i],second[i])&&second[i]>=min(first[i],second[i])){
            flagplus=1;
        }
    }
    if(flagplus){
        ans++;
    } else {
        ans+=abs(num-second[n])+1;
    }
    cout<<ans<<endl;
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