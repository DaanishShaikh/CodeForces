#include<bits/stdc++.h>
using namespace std;
// int check (vector<int>v){
//     sort(v.begin(),v.end());
//     int count=0;
//     for(int i=1 ; i<v.size(); i++){
//         if(v[i]!=v[i-1]){
//             count++;
//         }
//     }
//     return count;
// }
// bool check1 (vector<int>v){
//     for(int i=0 ; i<v.size() ; i++){
//         if(v[i]!=v[0]){
//             return false;
//         }
//     }
//     return true;
// }
// int main(){
//     int tt;
//     cin>>tt;
    // while(tt--){
    //     int n;
    //     cin>>n;
    //     vector<int>v(n);
    //     for(int i=0 ; i<n ; i++){
    //         cin>>v[i];
    //     }
    //     if(v.size()==2){
    //         cout<<"Yes"<<"\n";
    //     } 
    //     else if(check(v)>2){
    //         cout<<check(v)<<endl;
    //         cout<<"No"<<endl;
    //     }
        // else if(check1(v)){
        //     cout<<"Yes"<<endl;
        // }
        // else {
        //     sort(v.begin(),v.end());
        //     int count=0, maxcount=0;
        //     for(int i=0 ; i<n ; i++){
        //         for(int j=i ; j<n ; j++){
        //             if(j==n-1){
        //                 count++;
        //                 break;
        //             }
                    if(v[j]==v[j+1]){
                        count++;
                    } else {
                        count++;
                        i=j;
                        break;
                    }
                    //cout<<"maxcount="<<maxcount<<"count="<<count<<"i="<<i<<"j="<<j<<endl;
                }
                maxcount=max(maxcount,count);
                count=0;
            }
            //cout<<"maxcount="<<maxcount<<endl;
            if(maxcount==n/2||v.size()-maxcount==n/2){
                cout<<"Yes"<<endl;
            } else {
                cout<<"No"<<endl;
            }
        }
    }
    return 0;
}