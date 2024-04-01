#include<bits/stdc++.h>
using namespace std;
using i64=long long;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        i64 mini=10e9;
        vector<i64>v(n);
        for(i64 i=0 ; i<n ; i++){
            cin>>v[i];
            if(i){
                mini=min(mini,abs(v[i]-v[i-1]));
            }
        }
        if(is_sorted(v.begin(),v.end())){
        cout<<(mini/2)+1<<endl;
        } else {
        cout<<'0'<<endl;
        }
    }
    return 0;
}