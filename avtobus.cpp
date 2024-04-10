#include<bits/stdc++.h>
using namespace std;
using i64=long long;
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        i64 n;
        cin >> n;
        if(n%2){
            cout<<"-1"<<endl;
        }
        else if(n<4){
            cout<<"-1"<<endl;  
        }
        else if(n==4){
            cout<<1<<' '<<1<<endl;
        }
        else if(n==6){
            cout<<1<<' '<<1<<endl;
        }
        else if(n%6==0){
            if(n%4==0){
                cout<<n/6<<' '<<n/4<<endl;
            } else {
                if((n%4)==2){
                    cout<<n/6<<' '<<(n/4)<<endl;
                }
            }
        }
        else if(n%4==0){
            if(n%6==0){
                cout<<n/6<<' '<<n/4<<endl;
            } else {
                if(n==8){
                    cout<<2<<' '<<2<<endl;
                } else {
                    cout<<n/6+1<<' '<<n/4<<endl;   
                }
            }
        } else {
            if(n%4&&n%6){
                    cout<<(n/6)+1<<' '<<n/4<<endl;   
            }
        }
    }
    return 0;
}