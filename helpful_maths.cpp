#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    vector<string>v;
    for(int i=0 ; i<s.size() ; i+=2){
        string si(1,s[i]);
            v.push_back(si);
            cout<<"i="<<i<<endl;
    }
    for(int i=0 ; i<v.size(); i++){
        cout<<v[i]<<' ';
    }
    return 0;
}