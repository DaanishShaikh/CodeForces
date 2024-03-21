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
        bool flag=false;
        while(x.size()<s.size()){
            x=x+x;
            count++;
        }
        cout<<x<<"\n";
    }
    return 0;
}