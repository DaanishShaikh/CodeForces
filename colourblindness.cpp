#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        string t;
        cin >> t;
        bool flag=1;
        for(int i=0 ; i<s.size() ; i++){
            if((s[i]=='R' && t[i]!='R') || (s[i]!='R' && t[i]=='R')){
                flag=0;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}