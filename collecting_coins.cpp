#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin >> tt;
    while(tt--){
    int a,b,c,n;
    cin >> a >> b >> c >> n;
    int maxgirl=max(max(a,b),c);
    int mind = maxgirl - a + maxgirl - b + maxgirl - c;
    if(n>=mind){
        n-=mind;
        if(n%3==0){
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    } else {
        cout<<"NO"<<endl;
    }
    }
    return 0;
}