#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        unordered_map<int,int>occ;
        vector<int>v(n);
        for(int i=0 ; i<n ; i++){
            cin >> v[i];
            if(v[i]%2==1 && i%2==0){
                occ[0]++;
            }
            if(v[i]%2==0 && i%2==1){
                occ[1]++;
            }
        }
        if(occ[0]==occ[1]){
            cout<<occ[1]<<endl;
        } else {
            cout<<"-1"<<endl;
        }
    }
    return 0;
}