#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<int>v;
        int i=0;
        for(int i=0 ; i<n ; ++i){
            int x;
            cin>>x;
            if(i&&v.back()>x){
                v.push_back(1);
            }
            v.push_back(x);
        }
        cout<<v.size()<<endl;
        for(int i : v){
            cout<<i<<' ';
        }
        cout<<endl;
    }
    return 0;
}