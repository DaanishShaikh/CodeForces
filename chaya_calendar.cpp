#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0 ; i<t ; i++){
        int n;
        cin>>n;
        int a[n];
        for(int j=0 ; j<n ; j++){
            cin>>a[j];
        }
        int count=0;
        int temp=0;
        for(int j=0 ; j<n ; j++){
            temp=a[j];
            // cout<<"temp1="<<temp<<endl;
            if(temp>count){
                count=temp;
                // cout<<"count1="<<count<<' ';
            }
            
            else{
                while(temp<=count){
                    temp=temp+a[j];
                }
                // cout<<"temp2="<<temp<<' ';
                count=temp;
                // cout<<"count2="<<count<<' ';
            }
        }
        cout<<count<<endl;
    }
    return 0;

}