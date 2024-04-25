#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    // sort(s.begin(),s.end());
    int sum=min(abs('a'-s[0]),26-abs('a'-s[0]));
    //cout<<sum<<endl;
    for(int i=1 ; i<s.size() ; i++){
        sum+=min(abs(s[i]-s[i-1]),26-abs(s[i-1]-s[i]));
    }
    cout<<sum<<endl;
    return 0;
}