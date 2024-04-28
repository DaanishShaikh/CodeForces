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
            occ[v[i]]++;
        }
        if(occ.size()%2==1){
            cout<<"Alice"<<endl;
        } else {
            cout<<"Bob"<<endl;
        }
    }
    return 0;
}