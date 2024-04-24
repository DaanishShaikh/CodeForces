#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n,m;
        cin >> n >> m;
        vector<string>v(n);
        for(int i=0 ; i<n ; i++){
            cin >> v[i];
        }
        int minnum=INT_MAX;
        int sum=0;
        for(int k=0; k<n ; k++){
            for(int i=0 ; i<n ; i++){
                if(k!=i){
                    sum=0;
                    for(int j=0 ; j<m ; j++){
                        sum+=abs(v[i][j]-v[k][j]);
                    }
                    minnum=min(sum,minnum);
                }
            }
        }
        cout<<minnum<<endl;
    }
    return 0;
}