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
        int maxl=INT_MIN;
        for(int i=0 ; i<n ; i++){
            maxl=max(maxl,s[i]-'a'+1);
        }
        cout<<maxl<<endl;
    }
    return 0;
}