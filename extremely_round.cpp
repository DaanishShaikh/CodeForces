#include<bits/stdc++.h>
using namespace std;
void solve(int n){
    int count=0;
    for(int i=1 ; i<=9 ; i++){
        for(int j=i ; j<=n ; j*=10){
            count++;
        }
    }
    cout<<count<<endl;
}
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin>>n;
        solve(n);
    }
}