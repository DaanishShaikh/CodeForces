#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0 ; i<t ; i++){
        int l;
        cin>>l;
        vector<int>a(l);
        for(int j=0 ; j<l ; j++){
            cin>>a[j];
        }
        for(int k=0 ; k<l ; k++){
            for(int m=0 ; m<l ; m++){
                if(a.size()==1){
                    break;
                }
                if(a[k]-a[m]>1){
                   cout<<"NO";
            }
            else{
                cout<<"YES";
            }
        }
        for(int j=0 ; j<l ; j++){
            cout<<a[j];
        }
    }
    return 0;
}