/*Not Accepted*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    set<int>s;
    vector<int>v;
    for(int i=0 ; i<n ; i++){
        int x;
        cin >> x;
        v.push_back(x);
        s.insert(x);
    }
    vector<int>setv;
    for(const int element : s){
        setv.push_back(element);
    }
    int maxans=0;
    int ans=0;
    for(int i=0 ; i<setv.size() ; i++){
        ans=0;
        for(int j=0 ; j<v.size() ; j++){
            if(v[j]==setv[i]+1 || v[j]==setv[i]-1){
                ans+=v[j];
            }
        }
        maxans=max(ans,maxans);
    }
    cout<<maxans<<endl;
    return 0;
}