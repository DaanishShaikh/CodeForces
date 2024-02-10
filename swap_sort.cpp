#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    vector<int> aog(n);

    for(int l=0 ; l<n ; l++){
        cin>>a[l];
        aog[l]=a[l];
    }
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
    for(int k=0 ; k<n ; k++){
        cout<<a[k];
    }
    // for(int k=0 ; k<n ; k++){
    //     cout<<aog[k];
    // }
    int tempe,tempi1,tempi2;
    for(int m=0 ; m<n ; m++){
        if(a[m]!=aog[m]){
            tempi1=m;
            tempe=a[m];
            for(int o=0 ; o<n ; o++){
            if(aog[o]==tempe){
                tempi2=o;
            }
        }
        }
        
        cout<<tempi1<<' '<<tempi2<<endl;
    }

}