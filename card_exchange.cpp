#include<bits/stdc++.h>
using namespace std;
 int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n,k;
        cin >> n >> k;
        unordered_map<int,int>occ;
        vector<int>v(n);
        for(int i=0 ; i<n ; i++){
            cin >> v[i];
            occ[v[i]]++;
        }
        bool flag=0;
        for(auto s:occ){
            if(s.second>=k){
                flag=1;
            }
        }
        if(flag){
            cout<<k-1<<endl;
        } else {
            cout<<v.size()<<endl;
        }
    }
    return 0;
 }