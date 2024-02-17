#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i=0 ; i<t ; i++){
        int n;
        cin>>n;
        int a[n];
        for(int j=0 ; j<n ; j++){
            a[j]=j+1;
            // cout<<a[j]<<endl;
        }
        // cout<<endl;
        // for(int j=n-1 ; j>0 ; j--){
        //         swap(a[j],a[j-1]);
        //         }
        for(int j=0 ; j<n ; j++){
            cout<<a[j]<<endl;
        }
        int flag;
        for(int j=0 ; j<n ; j++){
            for(int i=0 ; i<n ; i++){
            if((a[j]%a[i]==0||a[i]%a[j]==0)&&(a[j+1]%a[i+1]==0||a[i+1]%a[j+1]==0)){
                flag=true;
            }
            }
        }
        int temp;
        if(flag){
            for(int j=n-1 ; j>0 ; j--){
                swap(a[j],a[j-1]);
            }
        }
        for(int j=0 ; j<n ; j++){
            cout<<a[j]<<' ';
        }
        cout<<endl;
    }
    return 0;
}