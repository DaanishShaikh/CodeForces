#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int a,b;
        cin >> a >> b;
        if(a>b){
            swap(a,b);
        }
        if(((a%2==1)&&(b%2==1)) || ((a%2==1)&&(b==2*a))){
            cout<<"NO"<<endl;
        } else {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}