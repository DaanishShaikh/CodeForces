#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin >> tt;
    vector<pair<int,int>>teams(tt);
    for(int i=0 ; i<tt ; i++){
        int x,y;
        cin >> x >> y;
        teams[i]=make_pair(x,y);
    }
    int count=0;
    for(int i=0 ; i<tt ; i++){
        for(int j=0 ; j<tt ; j++){
            if(teams[i].first==teams[j].second){
                count++;
            }
        }
    }
    cout<<count<<endl;
    // for(int i=0 ; i<tt ; i++){
    //     cout<<"first="<<teams[i].first;
    //     cout<<"second="<<teams[i].second;
    // }
    return 0;
}