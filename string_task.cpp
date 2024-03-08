#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<pair<char,char>,int> latinpair[26]={
        {{'a', 'A'}, 1}, 
    };
    string s;
    cin>>s;
    for(int i=0; i<s.size() ; i++){
        if(isupper(s[i])){
            s[i]=tolower(s[i]);
        }
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){

        }
    }
    for(int i=0 ; i<s.size() ; i++){
        cout<<s[i]<<' ';
    }
    return 0;
}