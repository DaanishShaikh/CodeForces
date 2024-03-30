#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a==b){
            if(c%2==0){
                cout<<"Second"<<endl;
            } else{
                cout<<"First"<<"\n";
            }
        } else {
            if(a>b){
                a-=b;
                c-=a;
            if(c%2==0){
                cout<<"Second"<<endl;
            } else{
                cout<<"First"<<"\n";
            }
            } else{
                b-=a;
                c-=b;
            if(c%2==0){
                cout<<"Second"<<endl;
            } else{
                cout<<"First"<<"\n";
            }
            }
        }
    }
    return 0;
}