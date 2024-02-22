#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<char,int> p[26]={{'a', 1}, {'b', 2}, {'c', 3}, {'d', 4}, {'e', 5}, {'f', 6},
        {'g', 7}, {'h', 8}, {'i', 9}, {'j', 10}, {'k', 11}, {'l', 12},
        {'m', 13}, {'n', 14}, {'o', 15}, {'p', 16}, {'q', 17}, {'r', 18},
        {'s', 19}, {'t', 20}, {'u', 21}, {'v', 22}, {'w', 23}, {'x', 24},
        {'y', 25}, {'z', 26}};

    string s;
    cin>>s;
    string r;
    cin>>r;
    string k;
    cin>>k;
    int count=0;
    for(int i=0 ; i<s.size(); i++){
        for(int j=0 ; j<k.size(); j++){
            if(s[i]==k[j]){
                count++;
                k[j]='#';
                break;
            }
        }
    }
    // for(int i=0 ; i<k.size(); i++){
    //     cout<<k[i];
    // }
    //cout<<endl;
    for(int i=0 ; i<r.size(); i++){
        for(int j=0 ; j<k.size(); j++){
            if(r[i]==k[j]){
                count++;
                k[j]='#';
                break;
            }
        }
    }
    int counthash=0;
    for(int i=0 ; i<k.size(); i++){
        if(k[i]!='#'){counthash++;}
    }
//    cout<<endl;
    // cout<<count<<endl;
    if((count==s.size()+r.size())&&counthash==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;

}