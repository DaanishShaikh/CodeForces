#include<bits/stdc++.h>
using namespace std;
int main(){
    int s,n;
    cin >> s >> n;
    vector<pair<int,int>>strength;
    for(int i=0 ; i<n ; i++){
        int x,y;
        cin >> x >> y;
        strength.push_back(make_pair(x,y));
    }
    sort(strength.begin(),strength.end());
    bool flag=1;
    for(int i=0 ; i<n ; i++){
        if(strength[i].first<s){
            s+=strength[i].second;
        } else {
            flag=0;
            break;
        }
    }
    if(flag){
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
    // for(int i =0 ; i<n ; i++){
    //     cout<<strength[i].first<<' '<<strength[i].second<<endl;
    // }
    return 0;
}