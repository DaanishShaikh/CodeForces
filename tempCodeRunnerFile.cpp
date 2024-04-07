#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    string r;
    cin >> r;
    bool flag=1;
    for(int i=0,j=s.size()-1  ; i<s.size()&&j>=0 ; i++,j--){
        if(s[i]!=r[j]){
            flag=0;
        }
    }
    if(flag){
        cout<<"YES"<<endl;    
    } else if(s.size()!=r.size()){
        cout<<"NO"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
    return 0;
}