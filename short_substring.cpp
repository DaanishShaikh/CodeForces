#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        string s;
        cin >> s;
        for(int i=0 ; i<s.size()-2 ; i++){
            if(s[i]==s[i+1]){
                s[i+1]='#';
            }
        }
        for(int i=0 ; i<s.size() ; i++){
            if(s[i]!='#'){
            cout<<s[i];
            }
        }
        cout<<endl;
    }
    return 0;
}
//zzzzzzzzzz