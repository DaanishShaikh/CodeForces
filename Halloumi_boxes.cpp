/*Accepted*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        vector<int>c(n);
        vector<pair<int,int>>p(n);
        for(int i=0 ; i<n ; i++){
            cin>>v[i];
        }
        if(k>=2){
            cout << "YES" << "\n";
        } else {
        copy(v.begin(),v.end(),c.begin());
        sort(c.begin(),c.end());
        for(int i=0 ; i<v.size() ; i++){
            for(int j=0 ; j<c.size() ; j++){
                if(v[i]==c[j]){
                    p[i].first=i;
                    p[i].second=j;
                    // cout<<"p["<<i<<"].first="<<p[i].first<<' '<<"p["<<i<<"].second="<<p[i].second<<endl;
                    c[j]='*';
                    break;
                }
            }
        }
        for(int i=0 ; i<p.size() ; i++){
            // cout<<"i="<<p[i].first<<"j="<<p[i].second<<"\n";
        }

        bool flag=true;
        for(int i=0 ; i<p.size() ; i++){
            if(abs(p[i].first-p[i].second)==0){
                continue;
            } else {
                // cout<<"p["<<i<<"].first="<<p[i].first<<' '<<"p["<<i<<"].second="<<p[i].second<<endl;
                flag=false;
            }
        }
        if(flag){
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
        }
    }
    return 0;
}