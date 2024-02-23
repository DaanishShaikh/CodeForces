#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
using i64=long long;
// int middle(int mid,int target){
//        int high=n-1;
//        int low=0;
//        int mid;
//        while(low<high){
//         mid=high+low/2;
//         if(mid==target){
//             return mid;
//         }
//         if(mid<target){
//             int low=mid+1;
//         }
//         if(mid>target){
//             int high=mid-1;
//         }
//        }
//     }
int main(){
    i64 n, m;
    cin>>n>>m;
    vector<i64>a(n);
    vector<i64>b(m);
    for(i64 i=0; i<n ; i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    for(i64 i=0 ; i<m ; i++){
        cin>>b[i];
    }
    for(i64 i=0 ; i<m ; i++){
        i64 count=0;
        for(i64 j=0 ; j<n ; j++){
            if(b[i]>=a[j]){count++;}
        }
        cout<<count<<' ';
    }
    return 0;
}