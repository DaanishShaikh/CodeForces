#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int x;
    cin >> x;
    vector<int>v;
    for(int i=0 ; i<x ; i++){
        int z;
        cin >> z;
        v.push_back(z);
    }
    int y;
    cin >> y;
    for(int i=0 ; i<y ; i++){
        int z;
        cin >> z;
        v.push_back(z);
    }
    stack<int>st;
    for(int i=n ; i>0 ; i--){
        st.push(i);
    }
    sort(v.begin(),v.end());
    for(int i=0 ; i< v.size() ; i++){
        if(st.size()==0){
            break;
        }
        if(v[i]==st.top()){
            st.pop();
        }
    }
    if(st.size()){
        cout<<"Oh, my keyboard!"<<endl;
    } else {
        cout<<"I become the guy."<<endl;
    }
    // for(int i=0 ; i<v.size() ; i++){
    //     cout<<v[i];
    // }
    
    return 0;
}