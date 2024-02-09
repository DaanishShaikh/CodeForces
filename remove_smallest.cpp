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
        for(int j=0 ; j<l ; j++){
            cout<<a[j];
        }
        bool flag=false;
        // for(int k=0 ; k<l ; k++){
        //     for(int m=0 ; m<l ; m++){
        //         if(a[k]-a[m]>1||a[k]-a[m]<-1){
                    // cout<<"a[k]="<<a[k]<<"a[m]="<<a[m]<<"dif="<<a[k]-a[m]<<endl<<m;
        //            flag=true;
        //            break;
        //            }            
        // }
         for(long long q=0 ; q<l-1 ; q++){
                
                if(a[q]-a[q+1]>1||a[q]-a[q+1]<-1){
                    flag = true;
                                        cout<<"a[k]="<<a[q]<<"a[m]="<<a[q+1]<<"dif="<<a[q]-a[q+1]<<endl<<q;

                }
                 cout<<"a[k]="<<a[q]<<"a[m]="<<a[q+1]<<"dif="<<a[q]-a[q+1]<<endl<<q;
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
