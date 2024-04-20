#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    string s;
    cin >>s;
    long long sum=0;
    for(int i=0 ; i<s.size() ; i++){
        if(s[i]=='1'){
            sum+=a;
        }
        else if(s[i]=='2'){
            sum+=b;
        }
        else if(s[i]=='3'){
            sum+=c;
        }
        else if(s[i]=='4'){
            sum+=d;
        }
    }
    cout<<sum<<endl;
    return 0;
}