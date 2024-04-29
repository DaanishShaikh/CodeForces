#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        int maxq=INT_MIN;
        int temp=n;
        int ans=0,i=1;
        while(temp--){
            int x,y;
            cin >>x >>y;
            if(x<=10){
                if(y>maxq){
                    maxq=y;
                    ans=i;
                }
            }
            i++;
        }
        cout<<ans<<endl;
    }
    return 0;
}