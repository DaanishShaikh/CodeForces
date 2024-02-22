#include<bits/stdc++.h>
using namespace std;
using i64 = long long; 
int main(){
    i64 tt;
    cin>>tt;
    while(tt--){
        i64 n, m, x, y, l;
        cin>>n>>m>>x>>y>>l;
        i64 cells=0;
        if(x==1&&y==1&&n==1&&m==1){
            cout<<'1'<<endl;
        }
        else{
        while(x<=n){
            cells++;
            x+=l;   
            if(x==n){break;}
            if(x==n-l){cells++;break;}
            if(x<n&&x>n-l){break;}         
        }
        while(y<=m){
            cells++;
            y+=l;
            if(y==m){break;}
            if(y==m-l){cells++;break;}
            if(y<m&&y>m-l){break;}
        }
        while(x<=n&&y<=m){
            x+=l;
            while(y<m){
                cells++;
                y+=l;
                
            }
            y+=l;
            while(x<n){
                cells++;
                x+=l;
            }
            // if(x==n){break;}
            // if(x==n-l){cells++;break;}
            // if(x<n&&x>n-l){break;}
            // if(y==m){break;}
            // if(y==m-l){cells++;break;}
            // if(y<m&&y>m-l){break;}
        }
        cout<<cells<<endl;
        }
    }
    return 0;
}