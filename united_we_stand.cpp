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
        vector<int>b;
        vector<int>c;
        int count=0;
        //copy(v.begin(),v.begin()+(v.size()/2),b.begin()); //
        //copy(v.begin()+(v.size()/2)+1, v.end() ,c.begin()); //
        for(int i=0 ; i<v.size() ; i++){
            if(v[i]==v[0]){
                count++;
            }
        }
        // for(int i=0 ; i<b.size() ; i++){ //
        //     if(b[i]==-1){
        //         b.erase(b.begin()+i);
        //     }
        // }
        for(int i=0 ; i<c.size() ; i++){
            for(int j=0 ; j<b.size() ; j++){
                if(b.size()==0||c.size()==0){
                    break;
                }
            if(b[j]%c[i]==0){
                // cout<<"entered if";
                b.push_back(c[i]);
                c.erase(c.begin()+i);
            }
        } 
        }    //
        if(count==n){
            cout<<"-1"<<"\n";
        } else {
        cout<<count<<' '<<n-count<<"\n";
        for(int i=0 ; i<count ; i++){
            cout<<v[i]<<' ';
        } 
        cout<<endl;
        for(int i=count ; i<v.size() ; i++){
            cout<<v[i]<<' ';
        }
        cout<<endl;
        }
    }
    return 0;
}