#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main (){
    int t;
    cin>>t;
    for(int i=0; i<t;i++ ){
        int l;
        cin>>l;
        int k;
        cin>>k;
        vector<int>a(l);
        for(int j=0 ; j<l ; j++){
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
        for(long long o=0 ; o<l ; o++){
            cout<<a[o]<<" ";
        }
        cout<<endl;
        int count=0;
        for(int p=0 ; p<l ; p++){
            if(abs(a[p]-a[p+1])>=k){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}