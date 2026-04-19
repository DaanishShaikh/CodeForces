#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
 
// using u128 = unsigned__int128;
// using i128 = __int128;
 
void solve() {
   i64 n,q;
   cin>>n>>q;
   i64 flag=0;
   i64 sum=0;
    vector<i64> a(n);
    vector<i64> prefix(n+1);
    for(i64 i=0;i<n;i++){
        cin>>a[i];
    }
    prefix[0]=0;
    for(i64 i=1;i<=n;i++){
        prefix[i]=prefix[i-1]+a[i-1];
    }
    // cout<<"Prefix Sums: ";
    // for(int i=0;i<=n;i++){
    //     cout<<prefix[i]<<" ";
    // }
    // cout<<endl<<"Rebuilt Array: "<<endl;
    // for(int i=0;i<n;i++){
    //     cout<<prefix[i+1]-prefix[i]<<" ";
    // }
    // cout<<endl;
    // cout<<"sum1: "<<sum<<endl;
    while(q--){
        // cout<<"sum2 = "<<sum<<endl;
        i64 l,r,k;
        cin>>l>>r>>k;
        // if(l>1){
        //     cout<<"prefix difference: "<<prefix[r]-prefix[l-1]<<" "<<"the indices: "<<l<<" to "<<r<<endl;
        // }
        // else {
        //     cout<<"prefix difference: "<<prefix[r]-prefix[0]<<" "<<"the indices: "<<l<<" to "<<r<<endl;
        // }
        // cout<<"Original sum: "<<prefix[n]<<" "<<"prefix["<<r<<"]: "<<prefix[r]<<" "<<"prefix["<<l-1<<"]:"<<" "<<prefix[l-1]<<endl;
        // cout<<"adding = "<<(r-l+1)*k<<endl;
        // cout<<"subtracting = "<<(prefix[r]-prefix[l-1])<<endl;
        // cout<<"prefix["<<n<<"]:"<<" "<<prefix[n]<<endl;
        if(l>1){
            sum+=prefix[n]-(prefix[r]-prefix[l-1]) + ((r-(l+1))*k);
        } else {
            sum+=(prefix[n]-prefix[r]) + ((r-l+1)*k);
        }
        //cout<<"sum:"<<sum<<endl;
        // if(sum%2)cout<<"YES"<<endl;
        // else cout<<"NO"<<endl;
        if(sum%2)cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
        sum=0;
    }

}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    i64 t;
    std::cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}