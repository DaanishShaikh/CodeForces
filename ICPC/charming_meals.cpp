#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0 ; i<n ; i++){
            cin>>a[i];
        }
        vector<int>b(n);
        for(int i=0 ; i<n ; i++){
            cin>>b[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int maxi=abs(b[n-1]-a[(n/2)]);
        // for(int i=(n/2)-2 ; i<(n/2)+2 ; i++){
        //     maxi=max(maxi,abs(b[n-1]-a[i]));
        // }
        cout<<maxi<<endl;
        for(int i=0 ; i<n ; i++){
            cout<<a[i]<<' ';
        }
        cout<<endl;
        for(int i=0 ; i<n ; i++){
            cout<<b[i]<<' ';
        }
        cout<<endl;
    }
    return 0;
}