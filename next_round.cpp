#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0 ; i<n ; i++){
        cin>>v[i];
    }
    int flag=false;
    for(int i=0 ; i<n ; i++){
        if(v[i]<=0){flag=true;}
        if(v[i]>0){flag=false;}
    }
    if(flag){cout<<'0';}
    else{
        int kv=v[k-1];
        int count=0;
        sort(v.begin(),v.end());
        for(int i=0 ; i<n ; i++){
            if(v[i]>=kv){count++;}
        }
    }
    cout<<count<<endl;

    return 0;
}