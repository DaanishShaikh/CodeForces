#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(true){
        n++;
        string s=to_string(n);
        bool flag=0,ansflag=1;
        for(int i=0 ; i<s.size() ; i++){
            for(int j=0 ; j<s.size() ; j++){
                if(i==j){
                    continue;
                } else {
                    if(s[i]==s[j]){
                        flag=1;
                        ansflag=0;
                        break;
                    }
                }
            }
            if(flag){
                break;
            }
        }
        if(ansflag){
            cout<<n;
            break;
        }
    }
    return 0;
}