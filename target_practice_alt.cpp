#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>v={
    {1,1,1,1,1,1,1,1,1,1},
    {1,2,2,2,2,2,2,2,2,1},
    {1,2,3,3,3,3,3,3,2,1},
    {1,2,3,4,4,4,4,3,2,1},
    {1,2,3,4,5,5,4,3,2,1},
    {1,2,3,4,5,5,4,3,2,1},
    {1,2,3,4,4,4,4,3,2,1},
    {1,2,3,3,3,3,3,3,2,1},
    {1,2,2,2,2,2,2,2,2,1},
    {1,1,1,1,1,1,1,1,1,1}
};
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int score=0;
        for(int i=0 ; i<10 ; i++){
            for(int j=0 ; j<10 ; j++){
                char c;
                cin>>c;
                if(c=='X'){
                    score+=v[i][j];
                }
            }
        }
        cout<<score<<"\n";
    }
    return 0;
}