#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int>a;
    int k,l,m,n;
    cin>>k>>l>>m>>n;
    int total;
    cin>>total;
    int count=0;
   
    
    for(int i=0; i<total; i++){
        a[i]=i+1;
    }
    for(int j=0; j<total ; j++){
        
            if(a[j]%k==0||a[j]%l==0||a[j]%m==0||a[j]%n==0){
            count++;
        }
        
    }    
    
    
   cout<<count;
    
    return 0;
}