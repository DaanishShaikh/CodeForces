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
        if((occ[1]+occ[2]*2)%2==1){
            cout<<"NO"<<endl;
        } else {
            int sum=(occ[1]+occ[2]*2)/2;
            if(sum%2==0 || (sum%2==1 && occ[1]!=0)){
                cout<<"YES"<<endl;
            } else {
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}