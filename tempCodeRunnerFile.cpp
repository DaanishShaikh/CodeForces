#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int a, b, c;
        cin >> a >> b >> c;
        if(2*b>c){
            if(a%2==0){
                cout<<c*(n/2)<<endl;
            } else {
                cout<< (c*(n/2)) + b<<endl;
            }
        } else {
            cout<<a*b<<endl;
        }
    }
    return 0;
}