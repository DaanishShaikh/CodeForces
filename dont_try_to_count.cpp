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
        } else {
            while(x.size()<s.size()){
                x=x+x;
                count++;
            }
            if(x.find(s)!=string::npos){
                cout<<count<<"\n";
            } else {
                x=x+x;
                count++;
                if(x.find(s)!=string::npos){
                    cout<<count<<"\n";
                } else {
                    cout<<"-1"<<"\n";
                }
            }
        }
    }
    return 0;
}