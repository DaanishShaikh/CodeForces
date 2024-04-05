#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int lp=0;
        int n;
        cin >> n;
        vector<int>c(n);
        vector<int>v(n);
        for(int i=0 ; i<n ; i++){
            cin>>v[i];
        }
        copy(v.begin(),v.end(),c.begin());
        sort(c.begin(),c.end());
        for(int i=0 ; i<n ; i++){
            if(prime(c[i])){
                lp=c[i];
                break;
            }
        }
        bool flag=1;
        for(int i=0 ; i<n ; i++){
            if(v[i]%lp!=0){
                flag=0;
            }
        }
        cout<<"lp="<<lp<<endl;
    }
    return 0;
}