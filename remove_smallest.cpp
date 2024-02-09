#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0 ; i<t ; i++){
        long long l;
        cin>>l;
        vector<long long>a(l);
        for(int j=0 ; j<l ; j++){
            cin>>a[j];
        }
        for(long long p=0 ; p<l ; p++){
            for(long long q=0 ; q<l-1 ; q++){
                
                if(a[q]>a[q+1]){
                    swap(a[q],a[q+1]);
                }
            }
        }
        bool flag=false;
         for(long long q=0 ; q<l-1 ; q++){
                
                if(a[q]-a[q+1]>1||a[q]-a[q+1]<-1){
                    flag = true;
                }
                if(flag){break;}
            }
        
        
        if(flag){
            cout<<"NO"<<endl;
            
        }
        if(flag==false){
            cout<<"YES"<<endl;
                                                   

        }

    }
                return 0;

    }
