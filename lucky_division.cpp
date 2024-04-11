#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    bool flag=0;
    vector<int>v={4,7,47,74,444,447,474,477,744,747,774,777};
    for(int i=0 ; i<v.size() ; i++){
        if(n%v[i]==0){
            flag=1;
        }
    }
    if(flag){
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
    return 0;
}