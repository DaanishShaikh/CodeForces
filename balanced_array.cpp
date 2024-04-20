#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        vector<int>v;
        int half=n/2;
        int i=0;
        while(half--){
            i++;
            v.push_back(2 + ((i-1)*2));
        }
        // for(int i=0 ; i<v.size() ; i++){
        //     cout<<v[i]<<' ';
        // }
        int sumeven=0;
        for(int i=0 ; i<v.size() ; i++){
            sumeven+=v[i];
        }
        i=0;
        half=n/2+1;
        while(half--){
            if(half==1){
                v.push_back(sumeven);
                break;
            }
            i++;
                v.push_back(1+(i-1)*2);
                sumeven-=(1+((i-1)*2)); 
        }
        if(v[v.size()-1]%2==1){
            cout<<"YES"<<endl;
        for(int i=0 ; i<v.size() ; i++){
            cout<<v[i]<<' ';
        }
        cout<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}