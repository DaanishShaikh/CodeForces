// /*not accepted*/
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     vector<int>ribs;
//     for(int i=0 ; i<3 ; i++){
//         int x;
//         cin >> x;
//         ribs.push_back(x);
//     }
//     sort(ribs.begin(),ribs.end());
//     if(ribs[0]==1){
//         //cout<<"ribs[0]=1"<<endl;
//         cout<<n<<endl;
//     } 
//     else if(ribs[0]==2 && n%2==0){
//         //cout<<"ribs[0]==2 && n%2==0"<<endl;
//         cout<<n/2<<endl;
//     } 
//     else if(n%ribs[0]==0){
//         //cout<<"n%ribs[0]==0"<<endl;
//         cout<<n/ribs[0]<<endl;
//     }
//     else if(n%ribs[1]==0){
//         //cout<<"n%ribs[1]==0"<<endl;
//         cout<<n/ribs[1]<<endl;
//     }
//     else if(n%ribs[2]==0){
//         //cout<<"n%ribs[2]==0"<<endl;
//         cout<<n/ribs[2]<<endl;
//     }
//     else if(ribs[0]==2 && n%2==1 && ribs[1]==3){
//         //cout<<"ribs[0]==2 && n%2==1 && ribs[1]==3"<<endl;
//         cout<<n/2<<endl;
//     } 
//     else if(ribs[0]%2==1 && (ribs[1]%2==0 || ribs[2]%2==0)){
//         //cout<<"ribs[0]%2==1 && (ribs[1]%2==0 || ribs[2]%2==0)"<<endl;
//         cout<<n/ribs[0]<<endl;
//     }
//     else {
//         //cout<<"ultimate else"<<endl;
//         if(n%ribs[0]==ribs[1]){
//             //cout<<"n%ribs[0]==ribs[1]"<<endl;
//             cout<<(n/ribs[0])+1<<endl;
//         }
//         else if(n%ribs[0]==ribs[2]){
//             //cout<<"n%ribs[0]==ribs[2]"<<endl;
//             cout<<(n/ribs[0])+1<<endl;        
//         }
//         else if(n%ribs[1]==ribs[0]){
//             //cout<<"n%ribs[1]==ribs[0]"<<endl;
//             cout<<(n/ribs[1])+1<<endl;        
//         }
//         else if(n%ribs[1]==ribs[2]){
//             //cout<<"n%ribs[1]==ribs[2]"<<endl;
//             cout<<(n/ribs[1])+1<<endl;        
//         }
//         else if(n%ribs[2]==ribs[0]){
//             //cout<<"n%ribs[2]==ribs[0]"<<endl;
//             cout<<(n/ribs[2])+1<<endl;        
//         }
//         else if(n%ribs[2]==ribs[1]){
//             //cout<<"n%ribs[2]==ribs[1]"<<endl;
//             cout<<(n/ribs[2])+1<<endl;        
//         } 
//         else {
//             //cout<<"ultimate else inside ultimate else"<<endl;
//             cout<<'1'<<endl;
//         }
//     }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b,c,zc,x,y,z,ans=0;
    cin >> n >> a >> b >> c;
    for(int x=0 ; x*a<=n ; x++){
        for(int y=0 ; y*b + x*a<=n ; y++){
            zc = n-(a*x + b*y);
            if(zc%c==0){
                z=zc/c;
                ans=max(ans,x+y+z);
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}