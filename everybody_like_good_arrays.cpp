#include<bits/stdc++.h>
using namespace std;
using i64=long long;
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
        for(int i = 0 ; i<parity.size() ; i++){
            cout<<parity[i]<<' ';
        }
        cout<<endl;
        for(int i =0,j=0 ; i<parity.size()-j ; i++){
            if(parity[i]==1&&parity[i+1]==1){
                count++;
                parity.erase(parity.begin()+i);
                j++;
                i--;
            }
            if(parity[i]==-1&&parity[i+1]==-1){
                count++;
                parity.erase(parity.begin()+i);
                j++;
                i--;
            }
        }
        for(int i = 0 ; i<parity.size() ; i++){
            cout<<parity[i]<<' ';
        }
        cout<<endl;
        cout<<"totalcount="<<count<<endl;
    }
    return 0;
}