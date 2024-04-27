#include<bits/stdc++.h>
using namespace std;
int main(){
    char c;
    cin >> c;
    string s;
    cin >> s;
    vector<char>ans;
    string k={"qwertyuiopasdfghjkl;zxcvbnm,./"};
    for(int i=0 ; i<s.size() ; i++){
        for(int j=0 ; j<k.size() ; j++){
            if(s[i]==k[j]){
                if(c=='R'){
                    ans.push_back(k[j-1]);
                } else if(c=='L'){
                    ans.push_back(k[j+1]);
                }
            }
        }
    }
    for(int i=0 ; i<ans.size() ;i++){
        cout<<ans[i];
    }
    return 0;
}