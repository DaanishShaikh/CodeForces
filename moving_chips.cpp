/*1 2 3 4 5 6 7*/
#include<bits/stdc++.h>
using namespace std;
bool check(vector<int>v){
    bool flag=true;
    for(int i=0 ; i<v.size() ; i++){
        if(v[i+1]-v[i]!=1){
            flag=false;
        }
    }
    return flag;
}
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
        for(int i=0 ; i<n ; i++){
            cout<<v[i];
        }
        cout<<endl;
        vector<int>onei;
        vector<int>zeroi;
        for(int i=0; i<n ; i++){
            if(i==n){break;}
            if(v[i]==1){
                onei.push_back(i);
            }
            if(v[i]==0){
                zeroi.push_back(i);
            }
        }
        for(int i=0 ; i<onei.size() ; i++){
            cout<<onei[i];
        }
        cout<<endl;
        for(int i=0 ; i<zeroi.size() ; i++){
            cout<<zeroi[i];
        }
        cout<<endl;
        int count=0;
        int z=0;
        int firstonei;
        while(true){
            if(onei[z+1]-onei[z]!=1){
                firstonei=onei[z];
                break;
            }
            z++;
        }
        cout<<firstonei<<endl;
        int glaf=false;
        for(int k=0 ; k<onei.size()/2 ; k++){
        for(int i=onei.size()-1, j=zeroi.size()-1; i>0 ; i--){
                        
                        if(k!=0){j--;}
            cout<<"onei["<<i<<"]="<<onei[i]<<' '<<"zeroi["<<j<<"]="<<zeroi[j]<<endl;
            if(onei[i]>zeroi[j]){
                swap(onei[i],zeroi[j]);
                if(k!=0){j--;}
                count++;
                cout<<"onei["<<i<<"]="<<onei[i]<<' '<<"zeroi["<<j<<"]="<<zeroi[j]<<endl<<"count="<<count<<endl;
            }
            if(k==0){break;glaf=true;}
            if(check(onei)){break;}
            
        }
        if(glaf){break;}
        }
        cout<<count;
    }
    return 0;
}
