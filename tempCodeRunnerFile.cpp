#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        long a,b,c,d;
        cin >> a >> b >> c >> d ; 
        int count=0;
        if(b<d){
            count+=abs(d-b);
            a+=abs(d-b);
        }
        if(a>c){
            count+=abs(a-c);
            cout<<count<<endl;
        } 
        else if(a==c){
            cout<<count<<endl;
        } else {
            cout<<"-1"<<endl;
        }
    }
    return 0;
}