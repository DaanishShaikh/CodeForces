#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0 ; i<n ; i++){
        cin >> v[i];
    }
    vector<int>ans;
    for(int i=1 ; i<=n ; i++){
        for(int j=0 ; j<n ; j++){
            if(v[j]==i){
                ans.push_back(j+1);
            }
        }
    }
    for(int i=0 ; i<ans.size() ; i++){
        cout<<ans[i]<<' ';
    }
    return 0;
}