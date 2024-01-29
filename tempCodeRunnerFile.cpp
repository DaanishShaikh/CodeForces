#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[100];
    int temp;
    if(n%2==0){
        for(int k=0 ; k<n ; k++){
            a[k]=k+1;
        }
        cout<<endl;
        for(int i=0 ; i<n ; i+=2){
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
        for(int j=0 ; j<n ; j++){
            cout<<a[j]<<endl;
        }
    }
    else{
        cout<<"-1";
    }
    return 0;
}