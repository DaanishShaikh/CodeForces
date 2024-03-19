/*Accepted*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        bool flag=false;
        int count=0;
        int countd=0;
        for(int j=0 ; j<s.size() ; j++){
        for(int i = j ; i<s.size() ; i++){
            if(s[i]=='.'){
                countd++;
            }
            if(s[i]=='#'){
                j=i;
                break;
            }
        }
        if(countd<3){
            countd=0;
        }
        }
        for(int i = 0 ; i<s.size() ; i++){
            if(s[i]=='.'){
                count++;
            }
        }
        if(countd>=3){
            cout<<'2'<<endl;
        } else {
            cout<<count<<endl;
        }
    }
    return 0;
}