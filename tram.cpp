#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int dif[n*2];
    int max;
    int sum=0;
    int a[n*2];
    for(int i=0 ; i<n*2; i++){
        cin>>a[i];
        // cout<<a[i];
    }
    for(int j=0 ; j<n*2 ; j++){
        if(j%2==0){
            sum=sum-a[j];
            dif[j]=sum;
            // cout<<dif[j]<<endl;
        }
        else{
            sum=sum+a[j];
            dif[j]=sum;
            // cout<<sum<<endl;
        }
        // dif[j]=a[j+1]-a[j];
        // cout<<endl<<dif[j];
        // cout<<dif<<endl<<difference[j];
    }
    // difference[0]=max;
    // for(int k=0 ; k<n ; k+=2){
    //     if(difference[k]>max){
    //         difference[k]=max;
    //     }
    // }
    // cout<<max;
   max=dif[0];
    for(int k=0 ; k<n*2 ; k++){
        if(dif[k]>max){
            max=dif[k];
        }
    }
    cout<<max;
    return 0;
}