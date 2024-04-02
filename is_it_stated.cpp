#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        bool flag=0;
        string s;
        cin>>s;
        for(int i=0 ; i<s.size() ; i++){
            if(i==s.size()-1){
                break;
            }
            if(s[i]=='i'&&s[i+1]=='t'){
                flag=true;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}