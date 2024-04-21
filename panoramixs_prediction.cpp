#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    vector<int>primes(100,1);
    for(int i=2 ; i<100 ; i++){
        if(primes[i]){
        for(int j=i*i ; j<100 ; j+=i){
            if(primes[j] && j%i == 0){
                primes[j]=0;
            }
        }
        }
    }
    vector<int>real;
    for(int i=2 ; i<100 ; i++){
        if(primes[i]){
            real.push_back(i);
        }
    }

    for(int i=0 ; i<real.size() ; i++){
        if(a==real[i] && b==real[i+1]){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}