#include<bits/stdc++.h>
using namespace std;
bool check(vector<int>v){
    for(int i=0 ; i<v.size()-1 ; i++){
        if(v[i]<v[i+1]){
            return false;
        }
     else {
        return true;
    }
    }
}
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i = 0 ; i<n ; i++){
            cin>>v[i];
        }
        if(v[0]!=1){
            cout<<"NO"<<"\n";
        } else {
            int j=n;
            while(j--){
            for(int i = 1 ; i<n-1 ; i++){
                if(v[i-1]<v[i]&&v[i+1]<v[i]){
                    swap(v[i],v[i+1]);
                }
            }
            }
            if(check){
                cout<<"YES"<<"\n";
            } else {
                cout<<"NO"<<"\n";
            }
        }
    }
    return 0;
}