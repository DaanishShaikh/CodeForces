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
    int count=1;
    for(int i=0 ; i<ribbon.size() ; i++){
        if(ribbon[i]!=1){
            count++;
        }
    }
    for(int i=0 ; i<ribbon.size() ; i++){
        cout<<ribbon[i]<<' ';
    }
    cout<<endl;
    if(k>=count){
        cout<<"NO"<<endl;
    } else {
        cout<<"YES"<<endl;
    }
    }
    return 0;
}