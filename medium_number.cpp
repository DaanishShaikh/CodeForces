#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin >>tt;
    while(tt--){
        int a[3];
        cin >> a[0];
        cin >> a[1];
        cin >> a[2];
        sort(a,a+3);
        cout<<a[1]<<endl;
    }
    return 0;
}