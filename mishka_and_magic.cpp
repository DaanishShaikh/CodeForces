#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int mishka=0;
    int chris=0;
    for(int i=0 ; i<n ; i++){
        int x,y;
        cin >>x >>y;
        if(x>y){
            mishka++;
        } 
        else if(x==y){
            //donothing
        }
        else {
            chris++;
        }
    }
    if(mishka>chris){
        cout<<"Mishka"<<endl;
    }
    else if(mishka==chris){
        cout<<"Friendship is magic!^^"<<endl;
    } else {
        cout<<"Chris"<<endl;
    }
    return 0;
}