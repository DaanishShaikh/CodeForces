#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<int>a;
        vector<int>b(n,0);
        for(int i=0 ; i<n ; i++){
            int x;
            cin>>x;
            a.push_back(x);
        }
        int maxnum=0;
        for(int i=0 ; i<n ; i++){
            maxnum=max(maxnum,a[i]);
        }
        for(int i=0 ; i<n ; i++){
            b[i]=maxnum-a[i]+1;
        }
        for(int i=0 ; i<n ; i++){
            cout<<b[i]<<' ';
        }
        cout<<endl;
    }
    return 0;
}