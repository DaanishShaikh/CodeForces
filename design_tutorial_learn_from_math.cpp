#include<bits/stdc++.h>
using namespace std;
vector<int>primes(1000006,1);
int main(){
    int n;
    cin >> n;
    for(int i=2 ; i<=1000006 ; i++){
        if(primes[i]==1){
        for(int j=i*i ; j<=1000006 ; j+=i){
            if(j%i==0){
                primes[j]=0;
            }
        }
        }
    }
    for(int i=4 ; i<n ; i++){
        if(primes[i]==0 && primes[n-i]==0){
            cout<<i<<' '<<n-i<<' ';
            break;
        }
    }
    return 0;
}