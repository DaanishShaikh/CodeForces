#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<pair<char,char>,int> latinpair[26]={
        {{'a', 'A'}, 1}, {{'b', 'B'}, 2}, {{'c', 'C'}, 3}, {{'d', 'D'}, 4}, {{'e', 'E'}, 5},
        {{'f', 'F'}, 6}, 
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