#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    stack<char>st;
    st.push('o');
    st.push('l');
    st.push('l');
    st.push('e');
    st.push('h');
    for(int i=0 ; i<s.size() ; i++){
        if(st.size()){
        if(s[i]==st.top()){
            st.pop();
        }
        } else {
            break;
        }
    }
    if(st.size()){
        cout<<"NO"<<endl;
    } else {
        cout<<"YES"<<endl;
    }
    return 0;
}