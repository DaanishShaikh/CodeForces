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
        int ans=0;
        set<char>unique;
        for(int i=0 ; i<s.size() ; i++){
            if(unique.find(s[i])!=unique.end()){
                ans+=1;
            } else {
                ans+=2;
                unique.insert(s[i]);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}