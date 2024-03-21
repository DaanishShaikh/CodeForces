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
        int p=n*m;
        bool flag=true;
        while(x.size()<s.size()){
            x=x+x;
            count++;
        }
        cout<<x<<"\n";

        for(int i=0; i<x.size()-s.size(); i++){
            for(int j=0 ; j<s.size() ; j++){
                if(x[i]!=s[j]){
                    flag=false;
                    break;
                } else {
                    flag=true;
                }
            }
        }
        if(flag){
            cout<<count<<"\n";
        } else {
            x=x+x;
            count++;
            bool flagl=true;
            for(int i=0; i<x.size()-s.size(); i++){
            for(int j=0 ; j<s.size() ; j++){
                if(x[i]!=s[j]){
                    flagl=false;
                    break;
                } else {
                    flagl=true;
                }
            }
        }
        if(flag){
            cout<<count<<"\n";
        } else {
            cout<<"-1"<<"\n";
        }
        }
    }
    return 0;
}