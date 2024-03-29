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
            for(int j=0 ; j<2*n ; j++){
                if(((i/2)+(j/2))%2==0){
                    cout<<'#';
                } 
            }
            cout<<endl;
        }
        
    }
    
    return 0;
}

