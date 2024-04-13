#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    for(int i=0 ; i<s.size() ; i++){
        if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B'){
            if(i==0||i==s.size()-3){
            s.erase(s.begin()+i);
            s.erase(s.begin()+i);
            s.erase(s.begin()+i);
            i--;
            } else {
                s[i]=' ';
                s.erase(s.begin()+i+1);
                s.erase(s.begin()+i+1);
            }
        }
    }
    for(int i=0 ; i<s.size() ; i++){
        if(s[i]==' '&&s[i+1]==' '){
            s.erase(s.begin()+i);
        }
    }
    for(int i=0 ; i<s.size() ; i++){
        cout<<s[i];
    }
    return 0;
}