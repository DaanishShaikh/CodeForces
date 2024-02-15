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
        int count=0;
        int square=0;
        for(int j=0 ; ; j++){
            square++;
            // cout<<"square="<<square;
            if(square==n+n-1||square==n+n){
                count++;
                // cout<<"count="<<count<<" ";
            }
            else if(square!=n+n-1||square!=n+n){
                count+=2;
                // cout<<"count="<<count<<' ';
            }
            
            if(count>=k){
                cout<<square<<endl;
                break;
            }
        }
    }
    return 0;
}