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
        int x=0,y=0;
        bool flag=0;
        for(int i=0 ; i<n ; i++){
            if(s[i]=='L'){
                x--;
            } else if(s[i]=='R'){
                x++;
            } else if(s[i]=='U'){
                y++;
            } else if(s[i]=='D'){
                y--;
            }
            if(x==1 && y==1){
                flag=1;
                break;
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