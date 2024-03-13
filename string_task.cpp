#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<pair<char,char>,int> latinpair[26]={
        
    };
    string s;
    cin>>s;
    for(int i=0; i<s.size() ; i++){
        if(isupper(s[i])){
            s[i]=tolower(s[i]);
        }
        if(s[i]=='a'||s[i]=='o'||s[i]=='y'||s[i]=='e'||s[i]=='u'
        ||s[i]=='i'||s[i]=='A'||s[i]=='O'||s[i]=='Y'||s[i]=='E'||s[i]=='U'||s[i]=='I'){
            s.remove(s.begin() + i,1);
        }
    }
    for(int i=0 ; i<s.size() ; i++){
        cout<<s[i]<<' ';
    }
    return 0;
}