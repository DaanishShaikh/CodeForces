#include<iostream>
using namespace std;
int main(){
    int x, y, z;
     int b[3]={0,0,0};
    int a[3];
    int vecnum;
    cin>>vecnum;
    for(int j=1; j<=vecnum; j++){
        for(int i=0; i<3; i++){
            cin>>a[i];
 
           
        
            b[i]=a[i]+b[i];
        
        
        
        }
        cout<<endl;
            }
            cout<<endl;
            if(b[0]==0&&b[1]==0&&b[2]==0){
                cout<<"YES";
            }
            else{
                cout<<"NO";
            }
    return 0;
}