#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0 ; i<t ; i++){
        int n;
        cin>>n;
        int counts[n];
        int z=0;
        for(int j=0 ; j<n ; j++){
        string s;
        cin>>s;
        
        int count=0;
        
        for(int k=0; k<n ; k++){
            if(s[k]=='1'){
                count++;
            }

        }
        // cout<<"count="<<count<<endl;
        counts[z]=count;
        // cout<<"counts["<<z<<"]="<<counts[z]<<endl;
        z++;
        }
        bool flag=false;
        int u=1;
        for(int y=0 ; y<n ; y++){
            if(counts[y]!='0'&&counts[y]==2*u-1){
                flag=true;
            u++;
            }
        }        
        if(flag){
            cout<<"TRIANGLE"<<endl;
        }
        else{
            cout<<"SQUARE"<<endl;
        }
        
    }
    return 0;
}