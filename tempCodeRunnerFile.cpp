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
        vector<long long>aog(l);
        for(long long j=0 ; j<l ; j++){
            cin>>a[j];
            aog[j]=a[j];
        }
        for(long long n=0 ; n<l ; n++){
            for(long long k=0 ; k<l-1 ; k++){
                if(a[k]>a[k+1]){
                 swap(a[k],a[k+1]);
                //  cout<<a[k]<<" "<<a[k+1];
            }
        }
        }
        // for(int m=0 ; m<l ; m++){
        //     cout<<a[m];
        // }
        long long first=a[0];
        long long last=a[l-1];
        bool flag=false;
        // for(long long o=0 ; o<l ; o++){
        //     if(abs(last-first)==a[o]){
        //         flag=true;
        //     }
        // }
        long long ind1,ind2;
        for(long long p=0 ; p<l ; p++){
            
                if(first==aog[p]){
                    ind1=p+1;
                }
                if(last==aog[p]){
                    ind2=p+1;
                }
            
        }
        if(l>1){
            cout<<ind1<<" "<<ind2<<endl;
        }
        if(l==1){
            cout<<"1"<<" "<<"1";
        }
    }
    return 0;
}