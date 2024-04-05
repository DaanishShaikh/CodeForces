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
        while(true){
            if((s[0]=='0'&&s.back()=='1')||(s[0]=='1'&&s.back()=='0')){
                s.erase(s.begin());
                s.erase(s.begin()+s.size()-1);
            } else {
                break;
            }
            if(s.size()==0){
                break;
            }
        }
        cout<<s.size()<<endl;
    }
    return 0;
}