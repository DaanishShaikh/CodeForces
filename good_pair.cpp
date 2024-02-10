#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;

    for(int i=0 ; i<t ; i++){
        int l;
        cin>>l;
        vector <int>a(l);
        for(int j=0 ; j<l ; j++){
            cin>>a[j];
        }
        if(l==1){
        cout<<"1"<<" "<<"1"<<endl;
    }
        if(l>1){
        int max=a[0];
        int min=a[0];
        int max_ind=0, min_ind=0;
        for(int k=0 ; k<l ; k++){
            if(a[k]>max){
                max=a[k];
                max_ind=k;
            }
            if(a[k]<min){
                min=a[k];
                min_ind=k;
            }
        }
        cout<<min_ind+1<<" "<<max_ind+1<<endl;
    }    
    }
    
    return 0;
}