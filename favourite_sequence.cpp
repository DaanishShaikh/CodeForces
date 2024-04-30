#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >>n;
        vector<int>v(n);
        for(int i=0 ; i<n ; i++){
            cin >> v[i];
        }
        vector<int>ans;
        for(int i=0,j=n-1,k=0 ; i<=j && k<n; k++){
            if(k%2==0){
                ans.push_back(v[i]);
                i++;
            } else {
                ans.push_back(v[j]);
                j--;
            }
        }
        for(int i=0 ; i<n; i++){
            cout<<ans[i]<<' ';
        }
        cout<<endl;
    }
    return 0;
}