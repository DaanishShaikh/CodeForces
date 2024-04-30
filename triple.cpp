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
        int ans=0;
        for(auto s:occ){
            if(s.second>=3){
                ans=s.first;
            }
        }
        if(ans){
            cout<<ans<<endl;
        } else {
            cout<<-1<<endl;
        }
    }
    return 0;
}