#include<bits/stdc++.h>
using namespace std;
int checksame(vector<int>v){
    for(int i=0; i<v.size() ; i++){
        if(v[i]!=v[0]){
            return false;
        }
    }
    return true;
}
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        vector<int>beauty(n);
        for(int i=0 ; i<n ; i++){
            cin >> beauty[i];
        }
        // int count1=1,count2=1;
        // for(int i=n-1 ; i>=0 ; i--){
        //     //cout<<"beauty["<<i<<"]="<<beauty[i]<<endl;
        //     if(beauty[i]==beauty[i-1]){
        //         count1++;
        //         //cout<<"if beauty["<<i<<"]="<<beauty[i]<<endl;
        //     } else {
        //         //cout<<"else beauty["<<i<<"]="<<beauty[i]<<endl;
        //         break;
        //     }
        // }
        // for(int i=0 ; i<beauty.size() ; i++){
        //     if(beauty[i]==beauty[i+1]){
        //         count2++;
        //         //cout<<"if beauty["<<i<<"]="<<beauty[i]<<endl;
        //     } else {
        //         //cout<<" else beauty["<<i<<"]="<<beauty[i]<<endl;
        //         break;
        //     }
        // }
        int count=0;
        int mincount=INT_MAX;
        for(int i=0 ; i<beauty.size() ; i++){
            if(beauty[i]==beauty[0]){
                count++;
            } else {
                mincount=min(mincount,count);
                count=0;
            }
        }
        if(checksame(beauty)){
            cout<<"-1"<<endl;
        } else {
            cout<<mincount<<endl;
        }
    }
    return 0;
}