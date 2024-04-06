#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
    int mini=min(a,b);
    for(int i=2 ; i<=a ; i++){
        if(a%i==0&&b%i==0){
            return i;
        }
    }
    return 1;
}
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        vector<int>v(n);
        for(int i=0 ; i<n ; i++){
            cin>>v[i];
        }
        bool flag=0;
        for(int i=0 ; i<n ; i++){
            for(int j=i+1 ; j<n; j++){
                if(gcd(v[i],v[j])<=2){
                    flag=1;
                }
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}