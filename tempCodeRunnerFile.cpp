#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin >> tt;
    while(tt--){
    int n;
    cin >> n;
    vector<int>v;
    for(int i=2 ; i<sqrt(1000006) ; i++){
        v.push_back(i*i);
    }
    int upper=upper_bound(v.begin(),v.end(),n)-v.begin();
    if(n>=4){
    cout<<sqrt(v[upper-1])<<endl;
    } else {
        cout<<'1'<<endl;
    }
    }
    return 0;
}