#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<int>v(n);
        vector<int>w;
        for(int i=0 ; i<n ; i++){
            cin>>v[i];
        }
        for(int i=0 ; i<n ; i++){
            if(v[i]>=10){
                while(v[i]){
                    int x=v[i]%10;
                    v[i]=v[i]/10;
                    w.push_back(v[i]%10);
                    w.push_back(x);   
                    v[i]=v[i]/10;                 
                }

            } else {
                w.push_back(v[i]);
            }
        }
        bool flag = true;
        for(int i=0 ; i<w.size() ; i++){
            if(i==w.size()-1){
                 break;
            }
            if(w[i]>w[i+1]){
                flag=false;
            }
        }
        // for(const int& element:w){
        //     cout<<element;
        // }
        if(flag){
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}