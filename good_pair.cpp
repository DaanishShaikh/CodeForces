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
        long long max=a[0];
        long long min=a[0];
        for(int k=0 ; k<l ; k++){
            if(a[k]>max){
                max=a[k];
            }
            if(a[k]<min){
                min=a[k];
            }
        }
        cout<<"max="<<max<<"min="<<min;
        
    //     if(l==1){
    //         cout<<"1"<<" "<<"1"<<endl;
            
    //     }
    //     if(l>1){
    //     for(long long n=0 ; n<l ; n++){
    //         for(long long k=0 ; k<l-n-1 ; k++){
    //             if(a[k]>a[k+1]){
    //              swap(a[k],a[k+1]);
    //         }
    //     }
    //     }
    //     long long first=a[0];
    //     long long last=a[l-1];
        
    //     bool flag=false;
    //     long long ind1,ind2;
    //     for(long long p=0 ; p<l ; p++){
            
    //             if(first==aog[p]){
    //                 ind1=p+1;
    //                 break;
    //             }
    //     }
    //     for(long long p=0 ; p<l ; p++){
    //             if(last==aog[p]){
    //                 ind2=p+1;
    //                 break;
    //             }
    //     }
    //         cout<<ind1<<" "<<ind2<<endl;
    //     }   
    // }
    return 0;
}