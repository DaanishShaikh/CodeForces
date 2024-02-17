//successful
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t ; i++){
        int n;
        cin>>n;
        vector<int> a(2*n);
        for(int j=0 ; j<2*n ; j++){
            cin>>a[j];
        }
        int score=0;
        int mini;
        sort(a.begin(), a.end());
        // for(int j=0 ; j<2*n ; j++){
        //     cout<<a[j]<<' ';
        // }
        for(int j=0 ; j<2*n ; j+=2){
            score+=a[j];
        }
        cout<<score<<endl;
    }
    return 0;
}