#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m, a;
    cin>>n>>m>>a;
    int count=0;
    if((n<a&&m<a)||(n==a&&m==a)){
        cout<<'1';
    }
    if(a==1){
        cout<<n*m;
    }
    if(n>a&&m<=a){
        cout<<n;
    }
    if(m>a&&n<=a){
        cout<<m;
    }
    else{
        if(n%a>=1){
            count=(n/a)+1;
            // cout<<'1';
        }
        if(n%a==0){
            count=n/a;
            // cout<<'2';
        }
        if(m%a==0){
            count+=(m/a)-1;
            // cout<<'3';
        }
        if(m%a>=1){
            count+=m/a;
            // cout<<'4';
        }
        int odd=m/a;
        count+=2*odd-1;
        cout<<count<<endl;
    }
    
    
    // else if(n>a&&m<=a){
    //     if(n%a==0){
    //         cout<<n/a;
    //     }
    //     else{cout<<(n/a)+1;}
    // }
    // else if(m>a&&n<=a){
    //     if(m%a==0){
    //         cout<<m/a;
    //     }
    //     else{cout<<(m/a)+1;}
    // }
    // else if(m>a&&n>a){
    //     if(m%)
    // }
    

    return 0;
} 