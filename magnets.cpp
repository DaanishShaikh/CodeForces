#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin >> tt;
    int count=0;
    vector<int>v(tt);
    for(int i=0 ; i<tt ; i++){
        cin >> v[i];
    }
    for(int i=0 ; i<tt ; i++){
        if(i==tt-1){
            count++;
            break;
        }
        if(v[i]!=v[i+1]){
            count++;
        }    
    }
    cout<<count<<endl;
    return 0;
}