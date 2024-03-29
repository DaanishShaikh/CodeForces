#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
    int tt;
    cin>>tt;

    while(tt--){
        int n;
        cin>>n;
        vector<vector<char>>v(2*n,vector<char>(2*n));

        for(int i=0 ; i<2*n ; i++){
            for(int j=0 ; j<2*n ; j+=4){
                v[i][j]='#';
                //v[i+1][j]='#';
                v[i][j+1]='#';
                //v[i+1][j+1]='#';
            }
        }
        for(int i=2 ; i<2*n ; i++){
            for(int j=2 ; j<2*n ; j+=4){
                v[i][j]='.';
                //v[i+1][j]='.';
                v[i][j+1]='.';
                //v[i+1][j+1]='.';
            }
        }
        for(int i=0 ; i<2*n ; i++){
            for(int j=0 ; j<2*n ; j++){
                cout<<v[i][j];
            }
            cout<<"\n";
        }
        
    }
    return 0;
}

