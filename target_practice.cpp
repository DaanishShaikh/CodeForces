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
                    else if(     (i==1 && (j!=0 && j!=9)) 
                    || (i==8 && (j!=0 && j!=9)) 
                    || (j==1 && (i!=0 && i!=9)) 
                    || (j==8 && (i!=0 && i!=9))    ){
                        score+=2;
                    }
                    else if(     (i==2 && (j!=0 && j!=9 && j!=1 && j!=8)) 
                    || (i==7 && (j!=0 && j!=9 && j!=1 && j!=8)) 
                    || (j==2 && (i!=0 && i!=9 && i!=1 && i!=8)) 
                    || (j==7 && (i!=0 && i!=9 && i!=1 && i!=8))    ){
                        score+=3;
                    }
                    else if(     (i==3 && (j!=0 && j!=9 && j!=1 && j!=8 && j!=2 && j!=7)) 
                    || (i==6 && (j!=0 && j!=9 && j!=1 && j!=8 && j!=2 && j!=7)) 
                    || (j==3 && (i!=0 && i!=9 && i!=1 && i!=8 && i!=2 && i!=7)) 
                    || (j==6 && (i!=0 && i!=9 && i!=1 && i!=8 && i!=2 && i!=7))    ){
                        score+=4;
                    }
                    
                }
            }
        }
        cout<<score<<endl;
    }
    return 0;
}