#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin >> tt;
    while(tt--){
    int a , b;
    cin >> a >> b;
    int ans=max(2*min(a,b),max(a,b));
    cout<<ans*ans<<endl;
    }
    return 0;
}