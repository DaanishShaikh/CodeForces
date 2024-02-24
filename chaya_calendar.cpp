/*code did not work hence commented*/
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     for(int i=0 ; i<t ; i++){
//         int n;
//         cin>>n;
//         int a[n];
//         for(int j=0 ; j<n ; j++){
//             cin>>a[j];
//         }
//         int count=0;
//         int temp=0;
//         for(int j=0 ; j<n ; j++){
//             temp=a[j];
//             // cout<<"temp1="<<temp<<endl;
//             if(temp>count){
//                 count=temp;
//                 // cout<<"count1="<<count<<' ';
//             }
            
//             else{
//                 while(temp<=count){
//                     temp=temp+a[j];
//                 }
//                 // cout<<"temp2="<<temp<<' ';
//                 count=temp;
//                 // cout<<"count2="<<count<<' ';
//             }
//         }
//         cout<<count<<endl;
//     }
//     return 0;

// }
#include<bits/stdc++.h>
using namespace std;
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
        // for(int i=0 ; i<n ; i++){
        //     cout<<v[i];
        // }
        //cout<<endl;
        int max=v[0],multiple=0;
        for(int i=1 ; i<n ; i++){
            if(v[i]<max){multiple=max/v[i]+1;max=v[i]*multiple;//cout<<"max="<<max<<' ';
            }
            if(v[i]==max){max+=v[i];//cout<<"max="<<max<<' ';
            }
            if(v[i]>max){max=v[i];//cout<<"max="<<max<<' ';
            }
        }
        cout<<max<<endl;
    }
    return 0;
}