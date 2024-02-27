/*i*/
#include<bits/stdc++.h>
using namespace std;
int main (){
    int tt;
    cin>>tt;
    while(tt--){
        int a,b,l;
        cin>>a>>b>>l;
        int x=1,y=1;
        int k=1;
        int count=0;
        int product=a*b;
        x=a,y=1;
        while(x*y<l){
            x*=x;
            if(l%x*y==0){
                count++;
            }
            
        }
        x=1,y=b;
        while(x*y<l){
            y*=y;
            if(l%x*y==0){
                count++;
            }
            
        }
        cout<<count<<endl;
    }
    return 0;
}
