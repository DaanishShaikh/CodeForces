#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        vector<int>v(4);
        for(int i=0 ; i<4 ; i++){
            cin >> v[i];
        }
        vector<int>ans;
        ans.push_back(max(v[0],v[1]));
        ans.push_back(max(v[2],v[3]));
        sort(v.begin(),v.end());
        sort(ans.begin(),ans.end());
        if(v[2]==ans[0] && v[3]==ans[1]){
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}