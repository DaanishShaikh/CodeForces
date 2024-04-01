#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int a,b,c;
        cin>>a>>b>>c;
        vector<int>v(b);
        for(int i=1 ; i<=b ; i++){
            v[i-1]=i;
        }
        for(int i=0 ; i<v.size() ; i++){
            if(v[i]==c){
                v.erase(v.begin()+i);
            }
        }
        int count=0;
        int m=1;
        vector<int>ans;
        for(int i=v.size()-1 ; i>=0 ; i--){
            if(v[i]<=a){
                cout<<"entered first if"<<endl;
            if(a%v[i]==0){
                cout<<"entered second if"<<endl;
                count+=a/v[i];
                break;
            } else {
                cout<<"entered else"<<endl;
               m=a/v[i];
               count+=m;
               for(int i=0 ; i<m ; i++){
                    ans.push_back(v[i]);
               }
               if(a!=1){ 
               a=a%v[i];
               } else {
                a--;
               }
            }
            }

        }
        if(a){cout<<"a="<<a<<endl<<"NO"<<endl;}
        cout<<"count="<<count<<endl;
        for(int i=0 ; i<v.size() ; i++){
            cout<<v[i];
        }
        cout<<endl;

    }
    return 0;
}