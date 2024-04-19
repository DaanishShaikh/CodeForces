#include<bits/stdc++.h>
using namespace std;
using i64=long long;
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        i64 n;
        cin >> n;
        if(n%2==1){
            cout<<"YES"<<endl;
        } else {
        while(n>2){
            //cout<<n<<endl;
            n/=2;
            if(n%2){
                cout<<"YES"<<endl;
                break;
            }
        }
        if(n<=2){
            cout<<"NO"<<endl;
        }
        }
    }
    return 0;
}