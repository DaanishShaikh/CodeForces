#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.ignore();
    string get;
    getline(cin,get);
    int counta=0,countd=0;
    for(int i=0 ; i<get.size(); i++){
        if(get[i]=='A'){
            counta++;
        } else{
            countd++;
        }
    }
    if(counta>countd){
        cout<<"Anton"<<"\n";
    } else if(counta==countd){
        cout<<"Friendship"<<"\n";
    }
    else {
        cout<<"Danik"<<"\n";
    }
    return 0;
}