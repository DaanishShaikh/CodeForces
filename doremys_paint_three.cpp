#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0 ; i<n ; i++){
            cin>>v[i];
        }
        if(v.size()==2){
            cout<<"Yes"<<"\n";
        } else {
            sort(v.begin(),v.end());
            for(int i=0,j=n-1 ; j>i ; i++,j--){
                if(i==n-1){
                    // countd++;
                    break;
                }
                if(v[i]==v[i+1]){                 
                    v.insert(v.begin()+(i+1),v[j]);
                    j++;
                    v.erase(v.begin()+j);
                    i+=3;
                }
                for(int k=0 ; k<n ; k++){
                    cout<<v[k]<<' ';
                }
                cout<<endl;
            }
            // if(counts==countd||countd==0){
            //     cout<<"Yes"<<endl;
            // } else {
            //     cout<<"No"<<endl;
            // }
        }
    }
    return 0;
}