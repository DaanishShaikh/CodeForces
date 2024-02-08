#include<iostream>
using namespace std;
int main(){
        int t;
    cin>>t;
    bool flag=false;
    

    for(int u=0 ; u<t ; u++){
        int l;
        cin>>l;
        int a[l];
        for(int j=0 ; j<l ; j++){
            cin>>a[j];
        }
        for(int i=0 ; i<l ; i++){
            for(int k=0 ; k<l-1 ; k++){
                if(k==l){
                    break;
                }
                if(a[k]>a[k+1]){
                    swap(a[k],a[k+1]);
                }
                
            }
        }
        
        int sumf=a[0];
    int sumb=0;
    flag=false;
    for(int k=1, b=l-1 ; k<l-1, b>=0 ; k++,b--){
        if(b==k){
            continue;
        }
        sumf=sumf+a[k];
        // cout<<sumf;
        
        // if(b>=0)
        sumb=sumb+a[b];
        if(sumb>sumf){
            flag=true;
        }
                // if(k==l){break;}

    }
    // Assuming 'l' is the length of array 'a'

// for(int k = 0, b = l - 1; k < l && b >= 0; k++, b--) {
//     if(b == k) {
//         continue;
//     }
    
//     // Add bounds checking for array access
//     if(k < l) {
//         sumf += a[k];
//         cout << sumf;
//     }
    
//     // Add bounds checking for array access
//     if(b >= 0) {
//         sumb += a[b];
//     }
    
//     if(sumb > sumf) {
//         flag = true;
//     }
// }

    if(flag==true){
        cout<<"YES"<<endl;
    }
    else if(flag==false){
        cout<<"NO"<<endl;
    }
    }
        

    return 0;
}