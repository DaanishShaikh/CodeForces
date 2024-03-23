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
        sort(v.begin(),v.end());
        // for(const int& element : v){
        //     cout<<element<<' ';
        // }
        // cout<<endl;
        if(v.size()==1){
            cout<<'1'<<"\n";
        } 
        else if(v.size()==2){
            if(v[0]==v[1]){
                cout<<"2"<<"\n";
            } else {
                cout<<"1"<<"\n";
            }
        } else {
            if(n%2==1){
                int count=0;
                for(int i=(n/2)+1; i<n ; i++){
                    if(v[i]==v[(n/2)]){
                        count++;
                        // cout<<"v["<<i<<"]="<<v[i]<<endl;
                    } else {
                        break;
                    }
                }
                if(count>0){
                    cout<<count+1<<"\n";
                } else {
                    cout<<'1'<<"\n";
                }
            } else{
                
            }
        }
    }
    return 0;
}