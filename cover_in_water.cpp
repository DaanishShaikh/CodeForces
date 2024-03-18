#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        string s;
        cin>>s;
        bool flag=false;
        int count=0;
        for(int i = 0 ; i<s.size()-2 ; i++){
            if(s[i]=='.'&&s[i+1]=='.'&&s[i+2]=='.'){
                flag=true;
                break;
            }
        }
        for(int i = 0 ; i<s.size() ; i++){
            if(s[i]=='.'){
                count++;
            }
        }
        if(flag){
            cout<<'2'<<endl;
        } else {
            cout<<count<<endl;
        }
    }
    return 0;
}