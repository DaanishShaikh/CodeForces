#include<iostream>
using namespace std;
int main(){
    int count=0;
    int n;
    cin>>n;
    int x,y;
    int arr[100];
    int min=arr[0];
    int max;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    max=arr[0];
    for(int j=0 ; j<n ; j++){
        if(arr[j]>=max){
            max=arr[j];
            
           
        }
          if(arr[j]<=min){
            min=arr[j];
            }
        }    
        for(int k=0; k<n ; k++){
                if(arr[k]==max){
                    x=k;
                    break;
                }

                }
        for(int z=n-1 ; z>=0 ; z--){
                if(arr[z]==min){
                        y=z;
                        break;
                    }
                }
                if (x>y){
                    count++;
                }
         y=(n-1)-y;
        if(count==1){
            cout<<x+y-1;
        }
        else{
            cout<<x+y;
        }
    
   
    

    return 0;
    
}