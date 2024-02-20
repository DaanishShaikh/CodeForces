// worked and accepted
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    vector<int>v(n);
    for(int i=0 ; i<n ; i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    vector<int> neg(m,0);
    for(int i=0,k=0 ; i<n ; i++){
        if(k==m){break;}
        if(v[i]<0){
            neg[k++]=v[i];
        }
    }
    // for(int i=0 ; i<n ; i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<"\n";
    int sum=0;
    for(int i=0 ; i<m ; i++){
        sum+=neg[i];
        // cout<<neg[i]<<endl;
    }
    cout<<-1*sum;
    return 0;
}