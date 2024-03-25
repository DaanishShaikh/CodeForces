#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        string s;
        cin>>s;
        string real="abc";
        int count=0;
        for(int i=0 ; i<real.size() ; i++){
            if(s[i]!=real[i]){
                count++;
            }
        }
        if(count>2){
            cout<<"NO"<<"\n";
        } else {
            cout<<"YES"<<"\n";
        }
        
    }
    return 0;
}