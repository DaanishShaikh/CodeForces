#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    if(islower(s[0])&&isupper(s[1])){
        for(int i=1 ; i<s.size() ; i++){
            s[i]=tolower(s[i]);
        }
            s[0]=toupper(s[0]);
    }
    else if(isupper(s[0])&&islower(s[1])){
        //donothing;
    }
    else{
        for(int i=0 ; i<s.size() ; i++){
            s[i]=tolower(s[i]);
        }
    }
    for(int i=0 ; i<s.size() ; i++){
        cout<<s[i];
    }
    return 0;
}