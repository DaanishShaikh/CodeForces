#include<iostream>
using namespace std;
int main(){
    int a[100];
    int count=0;
    int n;
    cin>>n;
    int temp=n;
    for(int i = 0; i<temp ; i++){
        cin>>a[i];
    }
    for(int j=0 ; j<temp ; j++){
        for (int k=1; k<=100; k++){
            if(a[j]%k==0){
                count++;
                n=n/k;
                
            }
        }
        if(count==3){
            
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }
    
    return 0;
}