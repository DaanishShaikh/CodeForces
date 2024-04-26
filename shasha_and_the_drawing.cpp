#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0 ; i<t ; i++){
        int n;
        cin>>n;
        int k;
        cin>>k;
        if(k<=(4*n)-4){
            if(k%2==0){
            cout<<k/2<<endl;
            } else {
                cout<<(k/2)+1<<endl;
            }
        } else if(k>=(4*n)-3){
            cout<<(k/2)+1<<endl;
        }
    }
    return 0;
}