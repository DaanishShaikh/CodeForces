#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s ;
    int maxplayers=0;
    for(int i=0 ; i<s.size() ; i++){
        int count = 0;
        if(s[i]=='0'){
            //cout<<"entered zero if"<<endl;
            for(int j=i ; j<s.size() ; j++){
                if(s[j]=='0'){
                    count++;
                    //cout<<"s["<<j<<"]="<<s[j]<<"count="<<count<<endl;
                } else {
                    //cout<<"countelse="<<count<<endl;
                    break;
                }
            }
            //cout<<"maxplayer="<<maxplayers<<endl;
            //cout<<"count="<<count<<endl;
            maxplayers=max(maxplayers,count);
            count=0;
        }
        else if(s[i]=='1'){
            //cout<<"entered one if"<<endl;
            for(int j=i ; j<s.size() ; j++){
                if(s[j]=='1'){
                    count++;
                    //cout<<"s["<<j<<"]="<<s[j]<<"count="<<count<<endl;
                } else {
                    break;
                }
            }
            //cout<<"maxplayer="<<maxplayers<<endl;
            //cout<<"count="<<count<<endl;
            maxplayers=max(maxplayers,count);
            count=0;

        }
    }
    //cout<<"maxplayers="<<maxplayers<<endl;
    if(maxplayers>=7){
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
    return 0;
}