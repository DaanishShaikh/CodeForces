#include<bits/stdc++.h>
using namespace std;
int binarysearch(int n, vector<int>s){
    int upper=0;
    int lower=s.size()-1;
    int mid=(upper + lower)/2;
    // cout<<"n="<<n<<endl;
    // cout<<"v["<<mid<<"]mid="<<v[mid]<<endl;
    // cout<<"v["<<lower<<"]lower="<<v[lower]<<endl;
    // cout<<"v["<<upper<<"]upper="<<v[upper]<<endl;
    while(upper<lower){
        if(s[mid]==n){
            return mid;
            // cout<<"if"<<endl;
            // cout<<"v["<<mid<<"]mid="<<v[mid]<<endl;
            // cout<<"v["<<lower<<"]lower="<<v[lower]<<endl;
            // cout<<"v["<<upper<<"]upper="<<v[upper]<<endl;

        }
        else if(s[mid]>n){
            // cout<<"if else"<<endl;
            lower=mid-1;
            mid=(lower+upper)/2;
            // cout<<"v["<<mid<<"]mid="<<v[mid]<<endl;
            // cout<<"v["<<lower<<"]lower="<<v[lower]<<endl;
            // cout<<"v["<<upper<<"]upper="<<v[upper]<<endl;
        } 
        else if(s[mid]<n) {
            // cout<<"else"<<endl;
            upper=mid+1;
            mid=(upper+lower)/2;
            // cout<<"v["<<mid<<"]mid="<<v[mid]<<endl;
            // cout<<"v["<<lower<<"]lower="<<v[lower]<<endl;
            // cout<<"v["<<upper<<"]upper="<<v[upper]<<endl;
        } else if (s[mid]!=n && s[upper]<n && s[lower]>n){
            return mid-1;
        } 
        else if(mid==s.size()-1){
            return s.size()-1;
        }
        else {
            return mid;
        }
    }
}
int main(){
    int n;
    cin >> n;
    int v[n];
    for(int i=0 ; i<n ; i++){
        cin >> v[i];
    }
    int q;
    cin >> q;
    vector<int>vv(q);
    for(int i=0 ; i<q ; i++){
        cin >> vv[i];
    }
    sort(v,v+n);
    for(int i=0 ; i<q ; i++){
        cout<<upper_bound(v,v+n,vv[i])-v<<endl;
    }
    return 0;
}