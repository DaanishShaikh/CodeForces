#include<iostream>
#include<cctype>
using namespace std;
int main(){
    string s;
    cin>>s;
    char u;
    if(islower(s[0])){
        u=toupper(s[0]);
        s[0]=u;
        cout<<s;
    }
    else{
        cout<<s;
    }
    return 0;
}