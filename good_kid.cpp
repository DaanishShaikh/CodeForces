#include<bits/stdc++.h>
using namespace std;
using i64 = long long;
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
        unordered_map<int,int>occ;
        for(int i=0 ; i<n ; i++){
            occ[v[i]]++;
        }
        if(occ[0]>1){
            cout<<'0'<<"\n";
        } else {
        i64 maxproduct=1;
        for(int i=0 ; i<n ; i++){
            i64 product=1;
            v[i]+=1;
            if(i>0){
                v[i-1]-=1;
            }
            for(int j=0 ; j<n ; j++){
                product*=v[j];
            }
            maxproduct=max(maxproduct,product);
        }
        cout<<maxproduct<<"\n";
        }
    }
    return 0;
}