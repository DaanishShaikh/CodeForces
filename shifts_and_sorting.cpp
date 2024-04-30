#include<bits/stdc++.h>
using namespace std;
using i64 = long long;
int main() {
    int tt;
    cin >> tt;
    while(tt--) {
        string s;
        cin >> s;
        for(i64 i=0 ; i<s.size() ; i++){
            if(s[i]=='1'){
                break;
            } else {
                s[i]='#';
            }
        }
        i64 largestg=0;
        i64 fzi=0;
        for(i64 i=0 ; i<s.size() ; i++){
            if(s[i]=='1'){
                largestg++;
            } else if(s[i]=='0'){
                fzi=i;
                break;
            }
        }
        i64 ans=0;
        for(i64 i=fzi; i<s.size() ; i++){
            if(s[i]=='0'){
                ans+=1+largestg;
            } else if(s[i]=='1'){
                largestg++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
