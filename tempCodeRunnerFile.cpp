#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin >> tt;
    while(tt--){
    long long a,b,c;
    cin>>a>>b>>c;
    long long ans=0;
    //cout<<"c%a="<<c%a<<endl;
    if(c>a){
        if(c%a!=b){
            if(c%a<b){
        ans+=c-(c%a)-(a-b);
        cout<<ans<<endl;
            } else {
                cout<<c-((c%a)-b)<<endl;
            }
        } else {
            cout<<c<<endl;
        }
    }
    else if(a==c && b==0){
        cout<<a<<endl;
    }
    else {
    cout<<'0'<<endl;
    }
    }
    return 0;
}