#include<iostream>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n , m;
        cin>>n>>m;
        string x;
        cin>>x;
        string s;
        cin>>s;
        int count=0;
        if(x.size()>=s.size()){
            if(x.find(s)!=string::npos){
                cout<<"0"<<"\n";
            } else {
                x=x+x;
                if(x.find(s)!=string::npos){
                    cout<<"1"<<"\n";
                } else {
                    cout<<"-1"<<"\n";
                }
            }
        } 
    }
    return 0;
}