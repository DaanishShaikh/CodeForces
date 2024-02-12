//not solved yet
/*can take sum of the entire sorted array, then subtract the max element from the sum and compare with the largest element*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
        long long t;
    cin>>t;
    bool flag=false;
    

    for(long long u=0 ; u<t ; u++){
        long long l;
        cin>>l;
        // int a[l];
        long long a[l];
        for(long long j=0 ; j<l ; j++){
            cin>>a[j];
        }
        for(long long i=0 ; i<l ; i++){
            for(long long k=0 ; k<l-1 ; k++){
                // if(k==l){
                //     break;
                // }
                if(a[k]>a[k+1]){
                    swap(a[k],a[k+1]);
                }
            }
        }
        long long sumf=a[0];
        long long sumb=0;
        flag=false;
        long long b=l-1;
        for(long long k=1; k<l ; k++){
        // if(b==k){
        //     continue;
        // }
        if(k<b){
        sumf=sumf+a[k];
        sumb=sumb+a[b];
        // cout<<"start"<<a[k]<<" ";
        // cout<<"end"<<a[b]<<" ";
        // cout<<"sumf"<<sumf<<' ';
        // cout<<"sumd"<<sumb<<' ';

        if(sumb>sumf){
            flag=true;
            break;
        }  
        }   
        b--;    
    }
    if(flag==true){
        cout<<"YES"<<endl;
    }
    else if(flag==false){
        cout<<"NO"<<endl;
    }
    }
        

    return 0;
}