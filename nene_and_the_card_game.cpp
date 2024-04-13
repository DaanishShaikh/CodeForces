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
        int doubles=0,singles=0;
        for(int i = 1; i<=n ; i++){
            if(occ[i]==2){
                doubles++;
            }
            else if(occ[i]==1){
                singles++;
            }
        }
        //cout<<"doubles="<<doubles<<"singles="<<singles<<endl;
        int nenedoubles=n-doubles+singles;
        if(doubles>nenedoubles){
            cout<<doubles+singles<<endl;
        }
        else if(doubles==0){
            cout<<'0'<<endl;
        } 
        else {
            cout<<doubles<<endl;
        }
    }
    return 0;
}