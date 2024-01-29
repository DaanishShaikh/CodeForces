#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x,y;
    int arr[100];
    int min=arr[0];
    int max=arr[0];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int j=0 ; j<n ; j++){
        if(arr[j]>max){
            max=arr[j];
        }
        x=j;
    }    
    for(int k=0; k<n ; k++){
        if(arr[k]<min){
            min=arr[k];
        }
        y=k;
    }
    y=4-y;
    
    cout<<max<<endl;
    cout<<min<<endl;
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<x+y;
    return 0;
    
}