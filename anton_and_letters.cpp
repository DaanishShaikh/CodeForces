#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    unordered_map<char,int>occ;
    int sum=0;
    for(int i=0 ; i<s.size() ; i++){
        occ[s[i]]++;
    }   
    for(auto i='a' ; i<='z' ; i++){
        if(occ.find(i)!=occ.end()){
            sum++;
        }
    }
    cout<<sum<<endl;
    return 0;
}