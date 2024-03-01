#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0 ; i<n ; i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int k=v[0];
        int l=v[n-1];
        int m=v[1];
        int i=v[n-2];
        int sum=abs(k-l);
        sum+=abs(l-m);
        sum+=abs(m-i);
        sum+=abs(i-k);
        cout<<sum<<endl;
    }
    return 0;
}