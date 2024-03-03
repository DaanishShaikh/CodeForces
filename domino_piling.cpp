#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int maxn=max(m,n);
    int minn=min(m,n);
    if(minn<2){cout<<maxn/2<<endl;}
    else if(minn==2){cout<<maxn<<endl;}
    else if(minn>2){
        int count=0;
        count+=(minn/2)*maxn;
        if(minn%2==0){cout<<count<<endl;}
        else {
            count+=maxn/2;
            cout<<count<<endl;
        }
    }
    return 0;
}