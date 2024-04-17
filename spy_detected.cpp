#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin >> tt;
    while(tt--){
    int n;
    cin >> n;
    unordered_map<int,int>occ;
    vector<int>v(n);
    for(int i=0 ; i<n ; i++){
        cin >> v[i];
        occ[v[i]]++;
    }
    int tofind=0;
    for(int i=0 ; i<n ; i++){
        if(occ[v[i]]==1){
            //cout<<v[i]<<endl;
            tofind=v[i];
            break;
        }
    }
    for(int i=0 ; i<n ; i++){
        if(v[i]==tofind){
            cout<<i+1<<endl;
            break;
        }
    }
    }
    return 0;
}