#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<int>a(n);
        int flag=false;
        for(int i=0 ; i<n ; i++){
            cin>>a[i];
        }
        int sum=0;
        for(int i=0 ; i<n ; i++){
            sum+=a[i];
        }
        // cout<<"sum="<<sum<<endl;
        if(sum%3==0){cout<<'0'<<endl;}
        else if(sum%3==1){
            for(int i=0 ; i<n ; i++){
                if(a[i]%3==1){
                    sum-=a[i];
                    if(sum%3==0){
                        cout<<'1'<<endl;
                        flag=true;
                        break;
                    }
                }
            }
            if(flag==false){
            for(int i=0 ; i<n ; i++){
                if(a[i]%3==2){
                    sum-=a[i];
                    sum+=1;
                    if(sum%3==0){
                        cout<<'2'<<endl;
                        break;
                    }
                }
            }
            }
        }
        else if(sum%3==2){
            cout<<'1'<<endl;
            // for(int i=0 ; i<n ; i++){
            //     if(a[i]%3==2){
            //         sum-=a[1];
            //         if(sum%3==0){
            //             cout<<'1'<<endl;
            //             flag=true;
            //             break;
            //         }
            //     }
            // }
            // if(flag==false){
            // cout<<'1'<<endl;
            // }
        }        
    }
    return 0;
}