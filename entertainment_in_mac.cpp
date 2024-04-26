#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        string t=s;
        reverse(t.begin(),t.end());
        cout<<min(s,t+s)<<endl;
    }
    return 0;
}
