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
        bool flag=1;
        while(true){
            for(int i=0 ; i<n ; i++){
                if(v[i]==v.size()-i){
                    v[i]=0;
                    for(int j=i ; j<n ; j++){
                        v[j]--;
                    }
                } else {
                    flag=0;
                    break;
                }
            }
        }
    }
}