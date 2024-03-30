#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int a,b,c;
        cin>>a>>b>>c;
        if(c%2==0){
            if(b<a){
                cout<<"First"<<endl;
            } else{
                cout<<"Second"<<"\n";
            }
        } else {
            if(a>=b){
                cout<<"First"<<"\n";
            } else{
                cout<<"Second"<<"\n";
            }
        }
    }
    return 0;
}