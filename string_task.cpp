#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<pair<char,char>,int> latinpair[26]={
        {{'a', 'A'}, 1}, {{'b', 'B'}, 2}, {{'c', 'C'}, 3}, {{'d', 'D'}, 4}, {{'e', 'E'}, 5},
        {{'f', 'F'}, 6}, {{'g', 'G'}, 7}, {{'h', 'H'}, 8}, {{'i', 'I'}, 9}, 
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