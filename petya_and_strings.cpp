/*Accepte*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<pair<char,char>,int> latinpair[26]={
        {{'a', 'A'}, 1}, {{'b', 'B'}, 2}, {{'c', 'C'}, 3}, {{'d', 'D'}, 4}, {{'e', 'E'}, 5},
        {{'f', 'F'}, 6}, {{'g', 'G'}, 7}, {{'h', 'H'}, 8}, {{'i', 'I'}, 9}, {{'j', 'J'}, 10},
        {{'k', 'K'}, 11}, {{'l', 'L'}, 12}, {{'m', 'M'}, 13}, {{'n', 'N'}, 14}, {{'o', 'O'}, 15},
        {{'p', 'P'}, 16}, {{'q', 'Q'}, 17}, {{'r', 'R'}, 18}, {{'s', 'S'}, 19}, {{'t', 'T'}, 20},
        {{'u', 'U'}, 21}, {{'v', 'V'}, 22}, {{'w', 'W'}, 23}, {{'x', 'X'}, 24}, {{'y', 'Y'}, 25},
        {{'z', 'Z'}, 26}
    };
    string s;
    cin>>s;
    string t;
    cin>>t;
    bool flag=true;
    int checks=0,checkt=0;
    for(int i=0 ; i<s.size();i++){
        if(s[i]!=t[i]){
            //cout<<i<<endl;
        for(int j=0 ; j<26 ; j++){
                if(s[i]==latinpair[j].first.first||s[i]==latinpair[j].first.second){
                    checks=j;
                    //cout<<"j="<<j+1<<endl;

                    break;
                }
            }
        for(int j=0 ; j<26 ; j++){
                if(t[i]==latinpair[j].first.first||t[i]==latinpair[j].first.second){
                    checkt=j;
                    //cout<<"j="<<j+1<<endl;

                    break;
                }
            }
        if(latinpair[checks].second!=latinpair[checkt].second)flag=false;
        }
    }
    if(flag==false){
    for(int i=0 ; i<s.size();i++){
        if(s[i]==t[i]){
            continue;
            }
        else{
            int ti=0, si=0;
            for(int j=0 ; j<26 ; j++){
                if(s[i]==latinpair[j].first.first||s[i]==latinpair[j].first.second){
                    si=j;
                    break;
                }
            }
            for(int j=0 ; j<26 ; j++){
                if(t[i]==latinpair[j].first.first||t[i]==latinpair[j].first.second){
                    ti=j;
                    break;
                }
            }
            if(si>ti){cout<<'1'<<endl;break;}
            else if(si<ti){cout<<"-1"<<endl;break;}
        }
    }
    }
    else{cout<<'0'<<endl;}
    return 0;
}