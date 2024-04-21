#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,t;
    cin >> n >> t;
    int n_=30500;
    vector<int>v(n_);
    bool flag=0;
    for(int i=1 ; i<n ; i++){
        cin >> v[i];
    }
    v[n]=1;
    for(int i=1 ; i<=n ; i+=v[i]){
        if(i==t){
                flag=1;
                break;
            }
        }
    if(flag){
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
    return 0;
}