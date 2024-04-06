#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        vector<int>v(n);
        for(int i=0 ; i<n ; i++){
            cin>>v[i];
        }
        unordered_map<int,int>occ;
        for(int i=0 ; i<n ; i++){
            occ[v[i]]++;
        }
        if(occ[2]%2==1){
            cout<<"-1"<<endl;
        } else {
            int count=0;
            for(int i = 0 ; i<n ; i++){
                if(v[i]==2){
                    count++;
                }
                if(count==occ[2]/2){
                    cout<<i+1<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}