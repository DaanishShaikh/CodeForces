#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        vector<int>a(n);
        for(int i=0 ; i<n ; i++){
            cin >> a[i];
        }
        vector<int>b(n);
        for(int i=0 ; i<n ; i++){
            cin >> b[i];
        }
        int count=0;
        for(int i=0 ; i<n ; i++){
            if(a[i]>b[i]){
                a.push_back(b[i]);
                sort(a.begin(),a.end());
                count++;
            }
        }
        // for(int i=0 ; i<n ; i++){
        //     cout<<a[i]<<' ';
        // }
        // cout<<endl;
        // for(int i=0 ; i<n ; i++){
        //     cout<<b[i]<<' ';
        // }
        // cout<<endl;
        cout<<count<<endl;
    }
    return 0;
}