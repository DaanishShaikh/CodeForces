#include<bits/stdc++.h>
using namespace std;
int main(){
    // int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0 ; i<n ; i++){
            cin>>v[i];
        }
        bool flag=1;
        
            for(int i=0 ; i<n ; i++){
                int count=0;
                for(int z=0 ; z<n ; z++){
                    if(v[z]!=0){
                        count++;
                    }
                }
                //cout<<"count="<<count<<endl;
                int sum=0;
            for(int k=0 ; k<n ; k++){
                sum+=v[k];
            }
            // if(sum=0){
            //     break;
            // }
                if(v[i]&&count==v[i]){
                    //cout<<"v["<<i<<"]="<<v[i]<<endl;
                    //cout<<"entered if at"<<i<<""<<"\n";
                    v[i]=0;
                    for(int j=i ; j<n ; j++){
                        if(v[j]>0){
                        v[j]--;
                        }
                    }
                } else if(v[i]==0){
                    break;
                } else if(v[i]==0&&sum!=0){
                    flag=0;
                    break;
                }
                else {
                    flag=0;
                    break;
                }
            }
            // int sum=0;
            // for(int k=0 ; k<n ; k++){
            //     sum+=v[k];
            // }
            // if(sum=0){
            //     break;
            // }
        
        if(flag){
            cout<<"YES"<<"\n";
        } else {
            cout<<"NO"<<"\n";
        }
    }
    return 0;
}