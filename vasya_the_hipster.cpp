#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    if(a==min(a,b)){
        cout<<a<<' ';
        b-=a;
        if(b){
            cout<<b/2;
        } else {
            cout<<'0'<<endl;
        }
    }
    else if(b==min(a,b)){
        cout<<b<<' ';
        a-=b;
        if(a){
            cout<<a/2;
        } else {
            cout<<'0'<<endl;
        }
    }
    return 0;
}