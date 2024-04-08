#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    bool flag=0;
    vector<int>v(n);
    for(int i=0 ; i<n ; i++){
        cin >> v[i];
        if(v[i]==1){
            flag=1;
        }
    }
    if(flag){
        cout<<"HARD"<<endl;
    } else {
        cout<<"EASY"<<endl;
    }
    return 0;
}