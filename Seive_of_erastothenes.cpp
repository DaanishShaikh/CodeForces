#include<iostream>
using namespace std;
int main(){
    int is_prime(int num){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<=n ; i++){
        a[i]=true;
    }
    for(int j=2 ; j<n ; j++){
        if(a[j]==true){
            for(int k=2*j ; k<=n ; k=k+j){
                a[k]=false;
            }
        }
    }
    for (int z=0 ; z<=n ; z++){
        if(a[z]==true){
            cout<<z<<endl;
        }
    }
    
    }
    is_prime(100);
    return 0;
}