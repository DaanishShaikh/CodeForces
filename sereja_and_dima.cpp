#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0 ; i<n ; i++){
        cin >> v[i];
    }
    int sereja=0;
    int dema=0;
    int i=0;
    while(v.size()){
        if(i%2==0){
            sereja+=max(v[0],v[v.size()-1]);
            if(max(v[0],v[v.size()-1])==v[0]){
                v.erase(v.begin());
            } else {
                v.erase(v.begin()+v.size()-1);
            }
        } else {
            dema+=max(v[0],v[v.size()-1]);
            if(max(v[0],v[v.size()-1])==v[0]){
                v.erase(v.begin());
            } else {
                v.erase(v.begin()+v.size()-1);
            }
        }
        i++;
    }
    cout<<sereja<<' '<<dema<<endl;
    return 0;
}