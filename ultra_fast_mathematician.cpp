#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,t;
    cin >> s >> t;
    vector<int>ans;
    for(int i=0 ; i<s.size() ; i++){
        if(s[i]==t[i]){
            ans.push_back(0);
        } else {
            ans.push_back(1);
        }
    }
    for(int i=0 ; i<ans.size() ; i++){
        cout << ans[i];
    }

    return 0;
}