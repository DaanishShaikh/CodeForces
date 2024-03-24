#include<bits/stdc++.h>
using namespace std;
using i64=long long;
vector<int>v;
int main(){
    i64 tt;
    cin>>tt;
    while(tt--){
        i64 n;
        cin>>n;
        i64 sum=0,x;
        for(int i=1 ; i<n ; i++){
            cin>>x;
            v.push_back(x);
            sum+=x;
        }
        cout<<sum*(-1)<<endl;
    }
    return 0;
}