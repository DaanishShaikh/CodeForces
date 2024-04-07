#include<bits/stdc++.h>
using namespace std;
bool adjascent(string s){
    for(int i=0 ; i<s.size() ; i++){
        if(s[i]=='1'&&s[i+1]=='1'){
            return 1;
        }
    }
    return 0;
}
int main(){
    int tt;
    cin >>tt;
    while(tt--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        unordered_map<char,int>occ;
        for(int i = 0; i<n ; i++){
            occ[s[i]]++;
        }
        if(occ['1']%2==1){
            cout<<"NO"<<endl;
        } 
        else if(occ['1']==2&&n==2){
            cout<<"NO"<<endl;
        } 
        else if(occ['1']==2){
            if(adjascent(s)){
                cout<<"NO"<<endl;
            } else {
                cout<<"YES"<<endl;
            }
        }
        else {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}