#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,a,b;
    cin >> n >> m >> a >> b;
    int cost=0;
    if(a*m>b && m<=n){
        cost+=(n/m)*b;
        cost+=(n%m)*a;
        cout<<cost<<endl;
    } else {
        cout<<n*a<<endl;
    }
    return 0;
}