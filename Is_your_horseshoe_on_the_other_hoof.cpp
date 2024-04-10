#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<int,int>occ;
    vector<int>v(4);
    for(int i=0 ; i<4 ; i++){
        cin >> v[i];
        occ[v[i]]++;
    }
    cout<<4-occ.size()<<endl;
    return 0;
}