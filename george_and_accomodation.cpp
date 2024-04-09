#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin >> tt;
    int count=0;
    while(tt--){
        int a , b ;
        cin >> a >> b;
        if(a<=b-2){
            count++;
        } 
    }
    cout<<count<<endl;
    return 0;
}