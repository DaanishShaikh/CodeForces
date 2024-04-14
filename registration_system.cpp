#include<bits/stdc++.h>
using namespace std;
// int findinvector(int k,string s,vector<string>z){
//     for(int i=k+1 ; i<z.size() ; i++){
//         if(z[i]==s){
//             return i;
//         }
//     }
// }
// int main(){
//     int n;
//     cin >> n;
//     unordered_map<string,int>namesregister;
//     string x;
//     vector<string>names;
//     for(int i=0,j=49 ; i<n ; i++){
//         cin >> x;
//         names.push_back(x);
//         namesregister[x]++;
//     }
//     int j=49;
//     int k=0;
//     int o=1;
//     for(int i=0 ; i<names.size() ; i++){
//         //cout<<"just name["<<i<<"]="<<names[i]<<endl;
//         if(namesregister[names[i]]>1){
//             //cout<<"repeated name["<<i<<"]="<<names[i]<<endl;
//             //cout<<"no. of times repeated["<<i<<"]="<<namesregister[names[i]]<<endl;
//             int p=namesregister[names[i]]-1;
//             while(p--){ 
//                 if(o--){
//                 k=findinvector(i,names[i],names);
//                 } else {
//                     k=findinvector(k,names[k],names);   //there's some isse here, works better with --k
//                 }
//                 char m=static_cast<char>(j);
//                 names[k]=names[k]+m;
//                 //cout<<"updated names["<<k<<"]="<<names[k]<<endl;
//                 k++;
//                 j++;
//             }
//             j=49;
//         }
//     }
//     for(int i=0 ; i<names.size() ; i++){
//         // names[i][names[i].size()-1]=static_cast<int>(names[i][names[i].size()-1]);
//         // //cout<<names[i][names[i].size()-1]<<endl;
//         // if(names[i][names[i].size()-1]>=49&&names[i][names[i].size()-1]<=57){
//         // cout<<names[i]<<endl;
//         // } else {
//         //     cout<<"OK"<<endl;
//         // }
//         cout<<names[i]<<endl;
//     }
int main(){
    int num;
    cin >> num;
    string x;
    unordered_map<string,int>namesregister;
    while(num--){
        cin >> x;
        if(namesregister[x]>=1){
            cout<<x<<namesregister[x]<<endl;
            namesregister[x]++;
        } else {
            cout<<"OK"<<endl;
            namesregister[x]++;
        }
    }
    return 0;
}