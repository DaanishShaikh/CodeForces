#include<bits/stdc++.h>
using namespace std;
vector<vector<char>>v(10,vector<char>(10,'.'));
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int score=0;
        for(int i=0 ; i<10 ; i++){
            for(int j=0 ; j<10 ; j++){
                cin>>v[i][j];
                if(v[i][j]=='X'){
                    if(i==0 || i==9 || j==0 || j==9){
                        score+=1;
                    }
                    
                }
            }
        }
        cout<<score<<endl;
    }
    return 0;
}