#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m; 
    cin >> n >> m;
    int ans=0;
    ans+=n;
    ans+=n/m;
    if(ans%m==0){
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}