#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main(){
    long long t;
    cin>>t;

    for(long long i=0 ; i<t ; i++){
        long long l;
        cin>>l;
        vector <long long>a(l);
        for(long long j=0 ; j<l ; j++){
            cin>>a[j];
        }
        if(l==1){
        cout<<"1"<<" "<<"1";
    }
        if(l>1){
        long long max=a[0];
        long long min=a[0];
        long long max_ind=0, min_ind=0;
        for(long long k=0 ; k<l ; k++){
            if(a[k]>max){
                max=a[k];
                max_ind+=k+1;
            }
            if(a[k]<min){
                min=a[k];
                min_ind+=k+1;
            }
        }
        cout<<min_ind<<" "<<max_ind<<endl;
    }    
    }
    
    return 0;
}