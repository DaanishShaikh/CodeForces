#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    for(int i=0 ; i<s.size() ; i++){
        if(isupper(s[i])){
            s[i]=tolower(s[i]);
        }
    }
    set<char>charset;
    for(int i=0 ; i<s.size() ; i++){
        charset.insert(s[i]);
    }
    // cout<<"the charset:-"<<endl;
    // for(char ch : charset){
    //     cout<<ch<<' ';
    // }
    // cout<<endl;
    stack<char>st;
    for(char i='z' ; i>='a' ; i--){
        st.push(i);
    }
    // for(int i=1;  i<=26 ; i++){
    //     cout<<st.top()<<' ';
    //     st.pop();
    // }
    for(char ch : charset){
        if(ch==st.top()){
            st.pop();
        }
    }     
    if(st.size()){
        cout<<"NO"<<endl;
    } else {
        cout<<"YES"<<endl;
    }  
    return 0;
}