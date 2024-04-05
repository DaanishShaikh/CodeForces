#include<bits/stdc++.h>
using namespace std;
bool prime(int n){
    vector<bool>p(n);
    for(int i=2 ; i<=n ; i++){
        p[i]=1;
    }
    for(int i=2 ; i<=n ; i++){
        for(int j=i*i ; j<=n ; j+=i){
            p[j]=0;
        }
    }
    vector<int>prime;
    for(int i=2 ; i<=n ; i++){
        if(p[i]==1){
            prime.push_back(i);
            // cout<<i<<' ';
        }
    }
    for(int i=0 ; i<prime.size() ; i++){
        if(prime[i]==n){
            return 1;
        }
    }
    return 0;
}
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
        cout<<"lp="<<lp<<endl;
    }
    return 0;
}