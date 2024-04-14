#include<bits/stdc++.h>
using namespace std;
int countlower(string s){
    int count=0;
    for(int i=1 ; i<s.size() ; i++){
        if(islower(s[i])){
            count++;
        }
    }
    return count;
}
int main(){
    string s;
    cin >> s;
    if(s.size()==1){
        if(islower(s[0])){
        s[0]=toupper(s[0]);
        } else {
            s[0]=tolower(s[0]);
        }
    }
    else if(countlower(s)>=1){
        //donothing
    }
    else if(islower(s[0])&&isupper(s[1])){
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