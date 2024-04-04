#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0 ; i<n ; i++){
            cin>>v[i];
        }
        int maxzero=0;
        for(int i=0 ; i<n ; i++){
            int count=0;
            if(v[i]==0){
                for(int j=i ; j<n ; j++){
                    if(v[j]==0){
                    count++;
                    } else {
                        break;
                    }
                }
                maxzero=max(maxzero,count);
            }
        }
        cout<<maxzero<<endl;
    }
    return 0;
}