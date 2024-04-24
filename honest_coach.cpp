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
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        int mindif=INT_MAX;
        for(int i=1 ; i<n ; i++){
            mindif=min(mindif,v[i]-v[i-1]);
        }
        cout<<mindif<<endl;
    }
    return 0;
}