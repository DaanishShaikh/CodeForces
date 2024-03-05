#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<char,int> latinpair[26]={{'a', 0}, {'b', 0}, {'c', 0}, {'d', 0}, {'e', 0}, {'f', 0},
        {'g', 0}, {'h', 0}, {'i', 0}, {'j', 0}, {'k', 0}, {'l', 0},
        {'m', 0}, {'n', 0}, {'o', 0}, {'p', 0}, {'q', 0}, {'r', 0},
        {'s', 0}, {'t', 0}, {'u', 0}, {'v', 0}, {'w', 0}, {'x', 0},
        {'y', 0}, {'z', 0}};
    string s;
    cin>>s;
    for(int i=0 ; i<s.size();i++){
        for(int j=0; j<26;j++){
            if(s[i]==latinpair[j].first){
                latinpair[j].second=1;
            }
        }
    }
    int sum=0;
    for(int i=0 ; i<26 ; i++){
        sum+=latinpair[i].second;
    }
    //cout<<sum<<endl;
    if(sum%2==0){cout<<"CHAT WITH HER!";}
    else{cout<<"IGNORE HIM!";}
    return 0; 
}