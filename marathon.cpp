#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin >> tt;
    while(tt--){
    int n=4;
    int count=0;
    vector<int>dist(n);
    for(int i=0 ; i<n ; i++){
        cin >> dist[i];
        if(dist[i]>dist[0]){
            count++;
        }
    }
    cout<<count<<endl;
    }
    return 0;
}