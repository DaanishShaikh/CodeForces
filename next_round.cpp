#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int count=0;
    vector<int>v(n);
    for(int i=0 ; i<n ; i++){
        cin>>v[i];
    }
    int flag=false;
    int countzero=0;
    for(int i=0 ; i<n ; i++){
        if(v[i]==0){countzero++;}
    }
    if(countzero==n){cout<<'0';}
    else{
        int kv=v[k-1];
        sort(v.begin(),v.end());
        for(int i=0 ; i<n ; i++){
            if(v[i]==0){continue;}
            if(v[i]>=kv){
                
                count++;
                }
        }
        cout<<count<<endl;
    }
    

    return 0;
}