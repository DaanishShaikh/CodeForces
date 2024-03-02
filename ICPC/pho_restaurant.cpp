#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    while(n--){
    string s;
    cin>>s;
    int onecount=0, zerocount=0;
    for(int i=0  ; i<s.size() ; i++){
        if(s[i]=='1'){onecount++;}
        if(s[i]=='0'){zerocount++;}
    } 
    if(onecount>zerocount){sum+=zerocount;}
    else{sum+=onecount;}
    }
    cout<<sum;
    return 0;
}