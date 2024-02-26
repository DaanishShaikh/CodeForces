/*accepted*/
#include<bits/stdc++.h>
using namespace std;
 int main(){
    int tt;
    cin>>tt;
    
        vector<vector<int>>v(tt,vector<int>(3));
        for(int j=0 ; j<tt ; j++){
        for(int i=0 ; i<3 ; i++){
            cin>>v[j][i];
        }
        }
        int anscount=0;
        for(int j=0 ; j<tt ; j++){
        int count=0;
        for(int i=0 ; i<3 ; i++){
            if(v[j][i]==1){
                count++;
            }
        }
        if(count>=2){anscount++;}
        }
        cout<<anscount<<endl;
    return 0;
 }