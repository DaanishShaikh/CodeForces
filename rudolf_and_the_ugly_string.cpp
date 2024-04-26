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
    int count=0;
    for(int i=2 ; i<s.size() ; i++){
        if(s[i-2]=='m' && s[i-1]=='a' && s[i]=='p' && s[i+1]=='i' && s[i+2]=='e'){
            count++;
            i+=2;
        }
        else if((s[i-2]=='m' && s[i-1]=='a' && s[i]=='p') || (s[i-2]=='p' && s[i-1]=='i' && s[i]=='e')){
            count++;
        }
    }
    cout<<count<<endl;
    }
    return 0;
}