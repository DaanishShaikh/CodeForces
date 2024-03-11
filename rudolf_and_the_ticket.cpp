#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n, m, k;
        cin>>n>>m>>k;
        vector<int>v(n);
        for(int i=0 ; i<n ; i++){
            cin>>v[i];
        }
        vector<int>c(m);
        for(int i = 0 ; i<m ; i++){
            cin>>c[i];
        }
        int count=0;
        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<m ; j++){
                if(v[i]+c[j]<=k){
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}