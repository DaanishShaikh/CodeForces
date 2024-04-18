#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int s;
        cin >> s;
        int start=0; 
        int end=0;
        int n=3;
        while(n--){
            end+=s%10;
            s/=10;
            //cout<<"s="<<s<<endl;
        }
        //cout<<"s="<<s<<endl;
        n=3;
        while(n--){
            start+=s%10;
            s/=10;
            //cout<<"s="<<s<<endl;
        }
        //cout<<"start="<<start<<"end="<<end<<endl;
        if(start==end){
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}