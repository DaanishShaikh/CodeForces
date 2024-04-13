#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0 ; i<n ; i++){
        cin >> v[i];
    }
    int count=1;
    bool flag=0;
    int maxprogress=0;
    for(int i=1 ; i<n ; i++){
        if(v[i]>=v[i-1]){
            count++;
        } else {
            maxprogress=max(maxprogress,count),
            count=1;
        }
    }
    maxprogress=max(maxprogress,count);
    cout<<maxprogress<<endl;
    return 0;
}