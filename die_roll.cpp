#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int maxnum=max(a,b);
    int ans=6-maxnum+1;
    if(ans==6){
        cout<<"1/1"<<endl;
    }
    else if(ans%2==0){
        ans/=2;
        cout<<ans<<"/3"<<endl;
    }
    else if(ans%3==0){
        ans/=3;
        cout<<ans<<"/2"<<endl;
    }
    else {
        cout<<ans<<"/6"<<endl;
    }
    return 0;
}