#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin >> tt;
    while(tt--){
    int a,b;
    cin >> a >> b;
    if(a%b){
    cout<<b-(a%b)<<endl;
    } else {
        cout<<'0'<<endl;
    }
    }
    return 0;
}