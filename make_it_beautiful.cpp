#include<bits/stdc++.h>
using namespace std;
bool check(vector<int>v){
    bool flag=1;
    for(int i=1 ; i<v.size() ; i++){
        if(v[i]!=v[0]){
            flag=0;
            
            break;
        }
    }
    return flag;
}
int main(){
    int t;
    cin>>t;
    for(int i=0 ; i<t ; i++){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0 ; i<n ; i++){
            cin>>v[i];
        }
        if(check(v)){
            cout<<"NO"<<endl;
        } else {
            sort(v.begin(),v.end());
            vector<int>ans;
            for(int i=0,j=n-1 ; j>=i ; i++,j--){
                if(i!=j){
                ans.push_back(v[i]);
                ans.push_back(v[j]);
                } else {
                    ans.push_back(v[i]);
                }

            }
            cout<<"YES"<<endl;
            for(int i=0 ; i<ans.size() ; i++){
                cout<<ans[i]<<' ';
            } cout<<endl;
        }
    }
        return 0;
}