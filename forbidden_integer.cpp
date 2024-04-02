#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n, k, x;
        cin>>n>>k>>x;
        vector<int>v;
        if(x!=1&&k>=1){
            cout<<"YES"<<endl;
            cout<<n<<endl;
            while(n--){
                cout<<'1'<<' ';
            }
            cout<<endl;
        }
        else if(x==1&&k==1){
            cout<<"NO"<<endl;
        }
        else if(x==1&&k==2){
            if(n%2==0){
                cout<<"YES"<<endl;
                int z=n/2;
                cout<<n/2<<endl;
                while(z--){
                    cout<<'2'<<' ';
                }
                cout<<endl;
            } else {
                cout<<"NO"<<endl;
            }
        } 
        else if(x==1&&k>=3){
            if(n%2==0){
                cout<<"YES"<<endl;
                int z=n/2;
                cout<<n/2<<endl;
                while(z--){
                    cout<<'2'<<' ';
                }
                cout<<endl;
            } else {
                cout<<"YES"<<endl;
                int z=n/2-1;
                cout<<n/2<<endl;
                while(z--){
                    cout<<'2'<<' ';
                }
                cout<<'3'<<endl;
            }
        }

    }
    return 0;
}