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
    cout<<s+s<<endl;
        if((s[0]==s[s.size()-1]&&s.size()!=1)||s[s.size()-1]>s[0]||s.size()){
            cout<<s<<endl;
        }
        else if(s.size()==1){
            cout<<s+s<<endl;
        }
        else{
            string t;
            t=s;
            reverse(t.begin(),t.end());
            s=t+s;
            //cout<<s<<endl;
            reverse(s.begin(),s.end());
            cout<<s<<endl;
        }
        
    }
    return 0;
}
