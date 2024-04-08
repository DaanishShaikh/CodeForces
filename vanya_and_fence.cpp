#include<bits/stdc++.h>
using namespace std;
int main(){
    int a , b;
    cin >> a >> b;
    int ans=0;
    vector<int>v(a);
    for(int i=0 ; i<v.size(); i++){
        cin >> v[i];
        if(v[i]>b){
            ans+=2;
        } else {
            ans++;
        }
    }
    cout<<ans;
    return 0;
}