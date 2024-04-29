#include<bits/stdc++.h>
using namespace std; 
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        unordered_map<int,int>occ;
        vector<int>v(2*n);
        for(int i=0 ; i<2*n; i++){
            cin >> v[i];
            if(v[i]%2==0){
                occ[0]++;
            } else {
                occ[1]++;
            }
        }
        if(occ[0]==occ[1]){
            cout<<"Yes"<<endl;
        } else {
            cout<<"No"<<endl;
        }
    }
    return 0;
}