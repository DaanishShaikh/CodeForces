#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin >> n;
    long long p=1000006;
    vector<bool>primes(p+1,1);
    primes[0]=0;
    primes[1]=0;
    for(long long i=2 ; i<=p ; i++){
        if(primes[i] && (long long)i * i <= p){
            for(long long j=i*i ; j<=p ; j++){
                if(j%i==0&&primes[j]==1){
                    primes[j]=0;
                }
            }
        }
    }
    
    while(n--){
        long long k;
        cin >> k;
        long long u=(long long)sqrt(k);
        if((long long)u*u==k&&primes[u]){
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}