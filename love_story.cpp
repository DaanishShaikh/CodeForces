#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        string s;
        cin >> s;
        string c="codeforces";
        int count=0;
        for(int i=0 ; i<10 ; i++){
            if(s[i]!=c[i]){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}