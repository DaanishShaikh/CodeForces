/*Not Accepted*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int two=2;
    while(two<n){
        two*=2;
    }
    cout<<two<<endl;
    if(n==two){
        cout<<'1'<<endl;
    }
    else if(n<two){
        two/=2;
        cout<<n-two+1<<endl;
    } else {
        cout<<n-two+1<<endl;
    }
    return 0;
}