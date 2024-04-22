#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        set<int>s;
        vector<int>setvector;
        unordered_map<int,int>occ;
        vector<int>v(n);
        for(int i=0 ; i<n ; i++){
            cin >> v[i];
            occ[v[i]]++;
            s.insert(v[i]);
        }
        for(const int element :s){
            setvector.push_back(element);
        }
        int ans=0;
        if(n<3){
            cout<<ans<<endl;
        } else {
            for(int j=0 ; j<setvector.size() ; j++){
                //cout<<"occ["<<setvector[j]<<"]="<<occ[setvector[j]]<<endl;
                ans+=occ[setvector[j]]/3;
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}