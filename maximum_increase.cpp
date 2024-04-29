#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0 ; i<n ; i++){
        cin >> v[i];
    }
    int count=0,ans=INT_MIN;
    for(int i=0 ; i<n ; i++){
        if(i==n-1){
            count++;
            ans=max(ans,count);
            break;
        }
        if(v[i]<v[i+1]){
            count++;
        } else {
            count++;
            ans=max(ans,count);
            count=0;
        }
    }
    cout<<ans<<endl;
    return 0;
}