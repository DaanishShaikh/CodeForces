#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int counteven=0,countodd=0;
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0 ; i<n ; i++){
            cin>>v[i];
            if(v[i]%2==0){
                counteven++;
            } else {
                countodd++;
            }
        }
        //cout<<"counteven="<<counteven<<endl<<"countodd="<<countodd<<endl;
        if(countodd%2==0){
            cout<<"YES"<<endl;
        } else if(countodd%2==1){
            cout<<"NO"<<endl;
        }
    }
    return 0;
}