#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin >> tt;
    vector<int>v;
    int n=0;
    for(int i=1 ; i<=9 ; i++){
        n=i;
        for(int j=0 ,k=10*i; j<4 ; j++,k*=10){
            v.push_back(n);
            n+=k;
        }
    }
    // for(int i=0 ; i<v.size() ; i++){
    //     cout<<v[i]<<' ';
    // }
    // cout<<endl;
    while(tt--){
        int n;
        cin >> n;
        int index=0;
        int ans=0;
        for(int i=0 ; i<v.size() ; i++){
            if(v[i]==n){
                index=i+1;
            }
        }
        ans+=(index/4)*10;
        if(index%4==0){
            cout<<ans<<endl;
        } else if (index%4==1){
            cout<<ans+1<<endl;
        } else if (index%4==2){
            cout<<ans+3<<endl;
        } else if (index%4==3){
            cout<<ans+6<<endl;
        }
    }
    return 0;
}