#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0 ; i<t ; i++){
        int l;
        cin>>l;
        int a[l];
        for(int j=0 ; j<l ; j++){
            cin>>a[j];
        }
        int sum=0;
         int flag=false;
        for(int m=0; m<l ; m++){
            for(int n=0; n<m+1 ; n++){
                cout<<sum<<' ';
                sum+=a[n];
                if(a[m]==sum){
                    swap(a[n],a[n+1]);
                }
                if(a[m]!=sum){
                    flag=true;
                }
            }
            
            sum=0;
        }
    
        if(flag){
            cout<<"YES"<<endl;
        for(int o=0 ; o<l ; o++){
            cout<<a[o];
        }
        }
        else{
            cout<<"NO";
        }
    }
        return 0;
}