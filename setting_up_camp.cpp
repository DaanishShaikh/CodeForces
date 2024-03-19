#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int a,b,c;
        cin >> a >> b >> c;
        int count=0;
        count+=a;
        if(b%3==0){
            count+=b/3;
            if(c%3==0){
                count+=c/3;
                cout<<count<<endl;
            } else {
                count+=(c/3)+1;
                cout<<count<<"\n";
            }
        } else {
            if(b%3==1){
                c=c-2;
                if(c%3==0){
                    count+=c/3;
                    cout<<count<<"\n";
                } else {
                    count+=(c/3)+1;
                    cout<<count<<"\n";
                }
            }
            else if(b%3==2){
                c=c-1;
                if(c%3==0){
                    count+=c/3;
                    cout<<count<<"\n";
                } else {
                    count+=(c/3)+1;
                    cout<<count<<"\n";
                }
            }
        }
    }
    return 0;
}