#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0 ; i<n ;i++){
            cin>>v[i];
        }
        sort(v.begin(), v.end());
        v[0]++;
        int product=1;
        for(int i=0 ; i<n ; i++){
            product*=v[i];
        }
        cout<<product<<"\n";
    }
    return 0;
}