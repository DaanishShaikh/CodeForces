#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int a,b;
        cin>>a>>b;
        if(a%b!=0){
            cout<<'1'<<endl;
            cout<<a<<endl;
        } else {
            for(int i=a-1 ; i>0 ; i--){
                if(i%b!=0){
                    cout<<'2'<<endl;
                    cout<<i<<' '<<a-i<<endl;
                    break;
                }
            }
        } 
    }
    return 0;
}