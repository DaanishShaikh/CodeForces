#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0 ; i<t ; i++){
        int n;
        cin>>n;
        string s;
        for(int j=0 ; j<n ; j++){
            cin>>s[j];
        }
        // for(int j=0 ; j<n ; j++){
        //     cout<<s[j];
        // }
        int coins=0;
        for(int j=0 ; j<n ; j++){
            // cout<<s[j]<<endl;
            if((s[j]=='*')&&(s[j+1]=='*')){
                break;
            }
            if(s[j]=='@'){
                coins++;
            }
            
        }
        cout<<coins<<endl;        
    }
    return 0;
}