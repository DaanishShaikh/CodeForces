#include<bits/stdc++.h>
using namespace std;
using i64=long long;
bool check(vector<int>v){
    bool flag=1;
    for(int i=0 ; i<v.size() ; i++){
        if(v[i]!=v[0]){
            flag=0;
        }
    }
    return flag;
}
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int count=0,totalcount=0;
        i64 n;
        cin >> n;
        vector<int>v(n);
        for(int i=0 ; i<n ; i++){
            cin>>v[i];
        }
        
        vector<int>parity;
        for(int i=0 ; i<n ; i++){
            if(v[i]%2==1){
                parity.push_back(1);
            } else {
                parity.push_back(-1);
            }
        }
        if(check(parity)){
            cout<<parity.size()-1<<endl;
        } else {
        // for(int i = 0 ; i<parity.size() ; i++){
        //     cout<<parity[i]<<' ';
        // }
        // cout<<endl;
        for(int i =0,j=0 ; i<parity.size()-j ; i++){
            if(i==parity.size()-1){
                break;
            }
            if(parity[i]==1&&parity[i+1]==1){
                //cout<<"count="<<count<<"parity["<<i<<"]="<<parity[i]<<"parity["<<i+1<<"]="<<parity[i+1]<<endl;
                count++;
                parity.erase(parity.begin()+i);
                j++;
                i--;
            }
            if(parity[i]==-1&&parity[i+1]==-1){
                //cout<<"count="<<count<<"parity["<<i<<"]="<<parity[i]<<"parity["<<i+1<<"]="<<parity[i+1]<<endl;
                count++;
                parity.erase(parity.begin()+i);
                j++;
                i--;
            }
        }
        // for(int i = 0 ; i<parity.size() ; i++){
        //     cout<<parity[i]<<' ';
        // }
        // cout<<endl;
        cout<<count<<endl;
        }
    }
    return 0;
}