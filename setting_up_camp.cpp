#include<bits/stdc++.h>
using namespace std;
using i64 = long long;
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
                if(c>=2){
                b=b+2;
                count+=b/3;
                c=c-2;
                if(c%3==0){
                    count+=c/3;
                    cout<<count<<"\n";
                } else {
                    count+=(c/3)+1;
                    cout<<count<<"\n";
                }
                } else {
                    cout<<"-1"<<"\n";
                }

            }
            else if(b%3==2){
                if(c>=1){
                b=b+1;
                count+=b/3;
                c=c-1;
                if(c%3==0){
                    count+=c/3;
                    cout<<count<<"\n";
                } else {
                    count+=(c/3)+1;
                    cout<<count<<"\n";
                }
                } else {
                    cout<<"-1"<<"\n";
                }
            }
        }
    }
    return 0;
}