#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int sum=0;
    vector<int>v(n);
    for(int i=0 ; i<n ; i++){
        cin >> v[i];
        sum+=v[i];
    }
    int sum2=0;
    int ans=0;
    sort(v.begin(),v.end());
    for(int i=n-1 ; i>=0 ; i--){
        if(sum2<=sum/2){
            sum2+=v[i];
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}