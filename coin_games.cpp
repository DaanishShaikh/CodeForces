// #include<bits/stdc++.h>
// using namespace std;
// bool allds(vector<char>v){
//     for(int i=0 ; i<v.size() ; i++){
//         if(v[i]=='U'){
//             return 0;
//         }
//     }
//     return 1;
// }
// int main(){
//     int tt;
//     cin >> tt;
//     while(tt--){
//         int n;
//         cin >> n;
//         string s;
//         cin >> s;
//         vector<char>ans;
//         for(int i=0 ; i<n ; i++){
//             ans.push_back(s[i]);
//         } 
//         int count=0;
//         while(ans.size()>2){       
//         for(int i=0 ; i<ans.size() ; i++){
//             if(ans.size()>2){
//             if(i==0 && ans[i]=='U'){
//                 if(ans[1]=='U'){
//                     ans[1]='D';
//                 } else if(ans[1]=='D'){
//                     ans[1]='U';
//                 }
//                 if(ans[ans.size()-1]=='U'){
//                     ans[ans.size()-1]='D';
//                 } else if(ans[ans.size()-1]=='D'){
//                     ans[ans.size()-1]='U';
//                 }
//                 ans.erase(ans.begin());
//                 count++;
//                 for(int i=0 ; i<ans.size() ; i++){
//                     cout<<ans[i];
//                 }
//                     cout<<endl;
//             } else if(i==ans.size()-1 && ans[i]=='U'){
//                 if(ans[0]=='U'){
//                     ans[0]='D';
//                 } else if(ans[0]=='D'){
//                     ans[0]='U';
//                 }
//                 if(ans[ans.size()-2]=='U'){
//                     ans[ans.size()-2]='D';
//                 } else if(ans[ans.size()-2]=='D'){
//                     ans[ans.size()-2]='U';
//                 }
//                 ans.erase(ans.begin()+ans.size()-1);
//                 count++;
//                 for(int i=0 ; i<ans.size() ; i++){
//                     cout<<ans[i];
//                 }
//                     cout<<endl;
//             } else if(ans[i]=='U'){
//                 count++;
//                 if(ans[i-1]=='U'){
//                     ans[i-1]='D';
//                 } else if(ans[i-1]=='D'){
//                     ans[i-1]='U';
//                 }
//                 if(ans[i+1]=='U'){
//                     ans[i+1]='D';
//                 } else if(ans[i+1]=='D'){
//                     ans[i+1]='U';
//                 }
//                 ans.erase(ans.begin()+i);
//             }
//             }
//         }
//         if(allds(ans) || ans.size()<3){
//             break;
//         }
//         }
//         if(ans[0]=='U' && ans[1]=='U'){
//             count+=2;
//         } else if(ans[0]=='U' && ans[1]=='D'){
//             count+=1;
//         } else if(ans[0]=='D' && ans[1]=='U'){
//             count+=1;
//         }
//         for(int i=0 ; i<ans.size() ; i++){
//             cout<<ans[i];
//         }
//         cout<<endl;
//         cout<<"count="<<count<<endl;
//         if(count%2==1){
//             cout<<"YES"<<endl;
//         } else {
//             cout<<"NO"<<endl;
//         }
//     }
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// bool allds(vector<bool>v){
//     for(int i=0 ; i<v.size() ; i++){
//         if(v[i]==1){
//             return 0;
//         }
//     }
//     return 1;
// }
// int main(){
//     int tt;
//     cin >> tt;
//     while(tt--){
//         int n;
//         cin >> n;
//         string s;
//         cin >> s;
//         vector<bool>ans;
//         for(int i=0 ; i<n ; i++){
//             if(s[i]=='U'){
//             ans.push_back(1);
//             } else {
//                 ans.push_back(0);
//             }
//         } 
//         int count=0;
//         while(ans.size()>2 && allds(ans)!=1){
//         for(int i=0 ; i<ans.size() ; i++){
//             if(i!=0 && i!=ans.size()-1){
//             if(ans[i]){
//                 //cout<<"normal"<<endl;
//                 ans[i+1]=!ans[i+1];
//                 ans[i-1]=!ans[i-1];
//                 ans.erase(ans.begin()+i);
//                 count++;
//             }
//             } else {
//                 if(i==0){
//                     if(ans[i]){
//                         //cout<<"first"<<endl;
//                         ans[1]=!ans[1];
//                         ans[ans.size()-1]=!ans[ans.size()-1];
//                         ans.erase(ans.begin());
//                         count++;
//                     }
//                 }
//                 else if(i==ans.size()-1){   
//                     //cout<<"last"<<endl;                     
//                     ans[ans.size()-2]=!ans[ans.size()-2];
//                     ans[0]=!ans[0];
//                     ans.erase(ans.begin()+i);
//                     count++;
//                 }
//             }
//         //     for(int i=0 ; i<ans.size() ; i++){
//         //     cout<<ans[i];
//         // }
//         // cout<<endl;
//         }
//     }
//         // for(int i=0 ; i<ans.size() ; i++){
//         //     cout<<ans[i];
//         // }
//         // cout<<endl;
//         for(int i=0 ; i<ans.size() ; i++){
//             if(ans[i]){
//                 count++;
//             }
//         }
//         if(count%2==1){
//             cout<<"YES"<<endl;
//         } else {
//             cout<<"NO"<<endl;
//         }
//     }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count=0;
    for(int i=0 ; i<s.size() ; i++){
        if(s[i]=='U'){
            count++;
        }
    }
    if(count%2==1){
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;

    while(tt--){
        solve();
    }

    return 0;
}