#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    bool flag=0;
    vector<vector<char>>v(n,vector<char>(m));
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            cin>>v[i][j];
            if(v[i][j]=='C' || v[i][j]=='M' || v[i][j]=='Y'){
                flag=1;
            }
        }
    }
    if(flag){
        cout<<"#Color"<<endl;
    } else {
        cout<<"#Black&White"<<endl;
    }
    return 0;
}