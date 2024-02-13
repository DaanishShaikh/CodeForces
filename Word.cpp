#include<iostream>
#include<cctype>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    int countu=0, countl=0;
    for(int i=0 ; i<s.size() ; i++){
        if(isupper(s[i])){
            countu++;
        }
        if(islower(s[i])){
            countl++;
        }
    }
    if(countu>countl){
        for(int i=0; i<s.size() ; i++){
        s[i]=toupper(s[i]);
        cout<<s[i];
        }
        
    }
    else if(countu<countl){
        for(int i=0; i<s.size() ; i++){
        s[i]=tolower(s[i]);
        cout<<s[i];
        }
    }
    else{
        for(int i=0; i<s.size() ; i++){
        s[i]=tolower(s[i]);
        cout<<s[i];
        }
        
    }
    return 0;
    }