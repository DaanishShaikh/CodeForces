#include<bits/stdc++.h>
using namespace std;
bool check(vector<int>v){
    for(int i=0 ; i<v.size() ; i++){
        if(v[i]==0){
            return false;
        }
    }
    return true;
}
int main(){
    int tt;
    cin >> tt;
    while(tt--){
    int n, m, k;
    cin >> n >> m >> k;
    vector<int>ribbon;
    vector<int>colour(m);
    bool flag=0;
    for(int i=0 ; i<n ; i++){
        for(int j=1 ; j<=m ; j++){
            if(ribbon.size()==n){
                flag=1;
                break;
            }
            ribbon.push_back(j);
        }
        if(flag){
            break;
        }
    }
    unordered_map<int,int>occ;
    for(int i=0 ; i<ribbon.size() ; i++){
        occ[ribbon[i]]++;
    }
    int sum=0;
    for(int i=2 ; i<=m ; i++){    
            sum+=occ[i];
        
    }

    // for(int i=0 ; i<ribbon.size() ; i++){
    //     cout<<ribbon[i]<<' ';
    // }
    // cout<<endl;
    //cout<<"count="<<count<<endl;
    //cout<<"sum="<<sum<<endl;
    if(k>=sum){
        cout<<"NO"<<endl;
    } else {
        cout<<"YES"<<endl;
    }
    }
    return 0;
}