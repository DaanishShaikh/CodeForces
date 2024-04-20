#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n>=0){
        cout<<n<<endl;
    } else {
    int temp=n;
    int last=0,slast=0;
    last=abs(temp%10);
    temp/=10;
    slast=abs(temp%10);
    if(last>=slast){
        cout<<n/10<<endl;
    } else {
        n/=10;
        n=n+abs(n%10);
        n=n-last;
        cout<<n<<endl;
    }
    }
    return 0;
}