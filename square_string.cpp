#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        string s;
        cin >> s;
        if(s.size()%2==0){
        vector<char>firstone;
        vector<char>secondone;
        for(int i=0 ; i<s.size()/2 ; i++){
            firstone.push_back(s[i]);
        }
        for(int i=s.size() /2  ; i<s.size() ; i++){
            secondone.push_back(s[i]);
        }
        // for(int i=0 ; i<firstone.size() ; i++){
        //     cout<<firstone[i]<<' ';
        // }
        // cout<<endl;
        // for(int i=0 ; i<secondone.size() ; i++){
        //     cout<<secondone[i]<<' ';
        // }
        // cout<<endl;
        bool flag=1;
        for(int i=0 ; i<firstone.size() ; i++){
            if(firstone[i]!=secondone[i]){
                flag=0;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
        } else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}