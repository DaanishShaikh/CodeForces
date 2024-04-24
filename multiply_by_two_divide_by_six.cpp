#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        int count=0;
        while(n%6==0){
            count++;
            n/=6;
        }
        while(n%3==0){
            count+=2;
            n/=3;
        }
        //cout<<"n="<<n<<endl<<"count="<<count<<endl;
        if(n==1){
            cout<<count<<endl;
        } else {
            cout<<"-1"<<endl;
        }
    }
    return 0;
}