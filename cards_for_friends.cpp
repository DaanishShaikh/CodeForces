#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int a,b,c;
        cin >> a >> b >>c;
        int count=1;
        while(a%2==0){
            count*=2;
            a=a/2;
        }
        while(b%2==0){
            count*=2;
            b=b/2;
        }
        if(count>=c){
            cout<<"YES"<<endl;        
        } else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}