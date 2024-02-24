// /*unsuccessful*/
// #include<bits/stdc++.h>
// using namespace std;
// bool check(vector<int>& onei) {
//     bool flag = true;
    
//     // Resize the copy vector to the same size as onei
//     vector<int> copy(onei.size());
    
//     // Copy elements from onei to copy
//     copy.assign(onei.begin(), onei.end());
//     sort(copy.begin(),copy.end());
    
//     // Check for consecutive elements
//     for (int i = 0; i < copy.size() - 1; i++) {
//         if (copy[i + 1] - copy[i] != 1) {
//             flag = false;
//             break; // Exit the loop if non-consecutive elements found
//         }
//     }
//     return flag;
// }

// // bool check(vector<int>&onei){
// //     // bool flag=true;
// //     vector<int> copy(onei.size());
// //     copy(onei.begin(),onei.end(),copy.begin());
// //     for(int i=0 ; i<copy.size()-1 ; i++){
// //         if(copy[i+1]-copy[i]!=1){
// //             return false;
// //         }
// //     }
// //     return true;
// // }
// int main(){
//     int tt;
//     cin>>tt;
//     while(tt--){
//         int n;
//         cin>>n;
//         vector<int>v(n);
//         for(int i=0 ; i<n ; i++){
//             cin>>v[i];
//         }
//         for(int i=0 ; i<n ; i++){
//             cout<<v[i];
//         }
//         cout<<endl;
//         vector<int>onei;
//         vector<int>zeroi;
//         for(int i=0; i<n ; i++){
//             if(i==n){break;}
//             if(v[i]==1){
//                 onei.push_back(i);
//             }
//             if(v[i]==0){
//                 zeroi.push_back(i);
//             }
//         }
//         if(zeroi.size()==0){cout<<'0';break;}
//         for(int i=0 ; i<onei.size() ; i++){
//             cout<<onei[i];
//         }
//         cout<<endl;
//         if(zeroi.size()!=0){
//         for(int i=0 ; i<zeroi.size() ; i++){
//             cout<<zeroi[i];
//         }}
//         cout<<endl;
//         int count=0;
//         int z=0;
//         int firstonei;
//         while(true){
//             if(onei[z+1]-onei[z]!=1){
//                 firstonei=onei[z];
//                 break;
//             }
//             z++;
//         }
//         cout<<firstonei<<endl;
//         int glaf=false;
//         if(zeroi.size()!=1){
//         for(int i=onei.size()-1 ; i>0 ; i--){
//         for(int j=zeroi.size()-1;  ; ){
                        


//             cout<<"onei["<<i<<"]="<<onei[i]<<' '<<"zeroi["<<j<<"]="<<zeroi[j]<<endl;
//             if(onei[i]>zeroi[j]){
//                 swap(onei[i],zeroi[j]);
//                 count++;
//                 cout<<"onei["<<i<<"]="<<onei[i]<<' '<<"zeroi["<<j<<"]="<<zeroi[j]<<endl<<"count="<<count<<endl;
//                 break;
//             }
//             if(j==0){break;glaf=true;}

//             if(j!=0){j--;}

//             for(int i=0 ; i<onei.size() ; i++){
//             cout<<onei[i];
//             if(check(onei)){glaf=true;cout<<"checked"<<endl;break;}
//                         cout<<endl;
//         }
                    
//         }
//         if(glaf){break;}
//         }}
//         cout<<count<<endl;
        
//     }
//     return 0;
// 



/*successful!!!*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0; i<n ; i++){
            cin>>v[i];
        }
        int firstindex,lastindex,count=0;
        for(int i=0; i<n ;i++){
            if(v[i]==1){
                firstindex=i;
                break;
            }
        }
        for(int k=n-1 ; k>=0 ; k--){
            if(v[k]==1){
                lastindex=k;
                break;
            }
            // cout<<k<<endl;
        }
        // cout<<firstindex<<' '<<lastindex<<endl;
        if(firstindex==lastindex){cout<<'0'<<endl;}
        else{
        for(int j=firstindex; j<=lastindex ; j++){
            if(v[j]==0){count++;}
        }
        cout<<count<<endl;
    }
    }
    return 0;
}