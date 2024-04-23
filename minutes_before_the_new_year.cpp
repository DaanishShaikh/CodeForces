#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n,m;
        cin >> n >> m;
        cout<<(24*60) - ((60*n) + m)<<endl;
    }
    return 0;
}