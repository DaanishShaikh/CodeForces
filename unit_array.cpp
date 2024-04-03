#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        unordered_map<int,int>occ;
        vector<int>v;
        while(n--){
            int x;
            cin>>x;
            v.push_back(x);
            occ[x]++;
        }
        int count=0;
        if(occ[-1]>occ[1]){
            while(occ[-1]>occ[1]){
                occ[-1]--;
                occ[1]++;
                count++;
            }
            if(occ[-1]%2==0){
                cout<<count<<endl;
            } else {
                cout<<count+1<<endl;
            }
        }
        else if(occ[-1]<occ[1]){
            if(occ[-1]%2==0){
                cout<<'0'<<endl;
            } else {
                cout<<'1'<<endl;
            }
        } else {
            if(occ[-1]%2==0){
            cout<<'0'<<endl;
            } else {
                cout<<'1'<<endl;
            }
        }
    }
    return 0;
}