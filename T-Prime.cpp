#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a[100];
    int count=0;
    int n;
    cin>>n;
    int temp;
    temp=sqrt(n);
    if(sqrt(n)*sqrt(n)==n){
        for(int i=2; i<sqrt(n); i++){
            if(sqrt(n)/i==0){
                count++;
            }
        }
        if(count==0){
            cout<<n;
        }
    }
    // root n should be is integer
    // root n is prime
    
    return 0;
}