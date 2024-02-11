#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    long l=s.size();
        for(int i=0 ; i<l ; i++){
            if(s[i]=='.'){
                cout<<'0';
            }
            if((s[i]=='-')&&(s[i+1]=='.')){
                cout<<'1';
                i++;
            }
            if(s[i]=='-'&&s[i+1]=='-'){
                cout<<'2';
                i++;
            }
        }
    return 0;
}