#include<iostream>
#include<vector>
using namespace std;
int main(){
        long long t;
    cin>>t;
    bool flag=false;
    

    for(int u=0 ; u<t ; u++){
        long long l;
        cin>>l;
        // int a[l];
        vector<long long> a(l);
        for(int j=0 ; j<l ; j++){
            cin>>a[j];
        }
        for(int i=0 ; i<l ; i++){
            for(int k=0 ; k<l-1 ; k++){
                // if(k==l){
                //     break;
                // }
                if(a[k]>a[k+1]){
                    swap(a[k],a[k+1]);
                }
            }
        }
        for(int o=0 ; o<l ; o++){
            cout<<a[o]<<" ";
        }
        long long sumf=a[0];
        long long sumb=0;
        flag=false;
        int b=l-1;
        for(int k=1; k<l ; k++){
        // if(b==k){
        //     continue;
        // }
        if(k<b){
        sumf=sumf+a[k];
        sumb=sumb+a[b];
        cout<<"start"<<a[k]<<" ";
        cout<<"end"<<a[b]<<" ";
        cout<<"sumf"<<sumf<<' ';
        cout<<"sumd"<<sumb<<' ';

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