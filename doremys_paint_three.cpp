/*accepted*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        map<int, int> maps;
        vector<int>v(n);
        for(int i=0 ; i<n ; i++){
            cin>>v[i];
            maps[v[i]]++;
        }
        if(maps.size()>=3){
            cout<<"No"<<endl;
        } else {
            if(abs(maps.begin()->second-maps.rbegin()->second)<=1){
                cout<<"Yes"<<endl;
            } else {
                cout<<"No"<<endl;
            }
        }
    }
    return 0;
}