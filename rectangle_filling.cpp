#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n,m;
        cin >> n >> m;
        vector<vector<char>>v(n,vector<char>(m));
        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<m ; j++){
                cin >> v[i][j];
            }
        }
        bool winfrow=0;
        for(int i=0 ; i<m ; i++){
            if(v[0][i]=='W'){
                winfrow=1;
            }
        }
        bool winlcolumn=0;
        for(int i=0 ; i<n ; i++){
            if(v[i][m-1]=='W'){
                winlcolumn=1;
            }
        }
        bool binfrow=0;
        for(int i=0 ; i<m ; i++){
            if(v[0][i]=='B'){
                binfrow=1;
            }
        }
        bool binlcolumn=0;
        for(int i=0 ; i<n ; i++){
            if(v[i][m-1]=='B'){
                binlcolumn=1;
            }
        }
        bool binfcolumn=0;
        for(int i=0 ; i<n ; i++){
            if(v[i][0]=='B'){
                binfcolumn=1;
            }
        }
        bool winfcolumn=0;
        for(int i=0 ; i<n ; i++){
            if(v[i][0]=='W'){
                winfcolumn=1;
            }
        }
        bool winlrow=0;
        for(int i=0 ; i<m ; i++){
            if(v[n-1][i]=='W'){
                winlrow=1;
            }
        }
        bool binlrow=0;
        for(int i=0 ; i<m ; i++){
            if(v[n-1][i]=='B'){
                binlrow=1;
            }
        }
        // cout<<"winlcolumn="<<winlcolumn<<"winfrow="<<winfrow<<endl;
        // cout<<"binlcolumn="<<binlcolumn<<"binfrow="<<binfrow<<endl;
        if(n>=2&&m>=2){
        if(v[0][0]==v[n-1][m-1] || v[0][m-1]==v[n-1][0]){
            cout<<"YES"<<endl;
            //cout<<"1"<<endl;
        } else if(v[n-1][0]=='W' && winlcolumn && winfrow){
            cout<<"YES"<<endl;
            //cout<<"2"<<endl;
        } else if(v[n-1][0]=='B' && binlcolumn && binfrow){
            cout<<"YES"<<endl;
            //cout<<"3"<<endl;
        } else if(v[n-1][m-1]=='W' && winfcolumn && winfrow){
            cout<<"YES"<<endl;
            //cout<<"4"<<endl;
        } else if(v[n-1][m-1]=='B' && binfcolumn && binfrow){
            cout<<"YES"<<endl;
            //cout<<"5"<<endl;
        } else if(v[0][m-1]=='W' && winfcolumn && winlrow){
            cout<<"YES"<<endl;
            //cout<<"6"<<endl;
        } else if(v[0][m-1]=='B' && binfcolumn && binlrow){
            cout<<"YES"<<endl;
            //cout<<"7"<<endl;
        } else if(v[0][0]=='W' && winlcolumn && winlrow){
            cout<<"YES"<<endl;
            //cout<<"8"<<endl;
        } else if(v[0][0]=='B' && binlcolumn && binlrow){
            cout<<"YES"<<endl;
            //cout<<"9"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
        } else if(n==1&&m>2){
            if(v[0][0]!=v[0][m-1]){
                cout<<"NO"<<endl;
            } else {
                cout<<"YES"<<endl;
            }
        } else if(n>2&&m==1){
            if(v[0][0]!=v[n-1][0]){
                cout<<"NO"<<endl;
            } else {
                cout<<"YES"<<endl;
            }
        }
        else {
            if(n==1&&m==2){
                if(v[0][1]==v[0][0]){
                    cout<<"YES"<<endl;
                } else {
                    cout<<"NO"<<endl;
                }
            } else if(n==1&&m==1){
                cout<<"YES"<<endl;
            } else if(n==2&&m==1){
                if(v[1][0]==v[0][0]){
                    cout<<"YES"<<endl;
                } else {
                    cout<<"NO"<<endl;
                }
            }
        }
    }
    return 0;
}